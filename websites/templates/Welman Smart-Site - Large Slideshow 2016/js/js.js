

$( document ).ready(function() {
	
	if(window.location.hash == '#book') // init booking page variant
	{
		$('.booking-engine-outer').show();
		$('.booking-engine-exclude').hide();		
	}
		
	$('.desc-avail-table').each(	function( index ) { // load availability
		
		$(this).html('Loading rates and availability...');
		
		var myTime = parseFloat(getQuerystring('time'));
		if (isNaN(myTime))
		{
			myTime = new Date();
			myTime = myTime.getTime();
		}
		
		var arrIds = $(this).prop('id').split('-');
		var sQuery = '?sid='+arrIds[1];		
		
		if(arrIds.length > 2)
		{
			sQuery += '&rtid='+arrIds[3];
		}
		sQuery += '&time='+myTime;
		
		var myAjaxUrl;
		if(window.location.host.indexOf('welman.co.nz') > 0)
		{ myAjaxUrl = 'http://webrooms.dev64.welman.co.nz' } //dev
		else{ myAjaxUrl = 'https://secure.web-rooms.co.nz' }; //live
		myAjaxUrl += '/ajax/loadSmartSiteAvailability.asp'+sQuery;
		
		$(this).load(myAjaxUrl, function(responseTxt,statusTxt,xhr) {
								
			$('td.no-avail').attr('title','Not available on this date.');
			$('td.yes-avail').attr('title','Available! Click to book.');
			$(".ellipsis").dotdotdot( {watch: "window" , ellipsis	: '... ',after: "a.readmore"} );
			var sSel = '#'+$(this).prop('id')+' > table > tbody > tr > td.yes-avail'			
			
			$(sSel).click( function() {
								
					var arrIds = $(this).parents('.desc-avail-table').prop('id').split('-');
					var sQuery = sQuery = '?time='+myTime;		 
					if(arrIds.length > 2)
					{
						sQuery += '&rooms='+arrIds[3];
					}
				 	sQuery += '#book';					
				 	var sUrl = $(this).parents('.desc-avail-table').siblings('a.action-button').first().prop('href');
				 	sUrl = sUrl.split('?')[0]+sQuery;				 	
					window.location.href = sUrl;				 
				});
			
			}); 		
		
	});
	
	$('a.property-view, ul.nav li a, .property-name a').each(	function( index ) { // maintain time stamp on these links		
		var thisTimestamp = getQuerystring('time',0);
		var thisUrl = $(this).prop('href');
		var thisPrefix = '?'
		if(thisUrl.indexOf('?') != -1)
		{thisPrefix = '&' }
		if(thisTimestamp > 0)
		{	$(this).prop('href',thisUrl+thisPrefix+'time='+thisTimestamp);}		
	});
	
	$('.desc-book-button, .webrooms-datepicker a, .book-roomtype, .book-link').each(	function( index ) { // maintain time stamp on these links and add #book hash
		var thisTimestamp = getQuerystring('time',0);
		var thisUrl = $(this).prop('href');
		var thisPrefix = '?'
		if(thisUrl.indexOf('?') != -1)
		{thisPrefix = '&' }
		if(thisTimestamp > 0)
		{	
			$(this).prop('href',thisUrl+thisPrefix+'time='+thisTimestamp+'#book');
		}else{
			$(this).prop('href',thisUrl+'#book');
		}
		
	});
	
	$('.webrooms-datepicker-custom a').each(	function( index ) { // init date pickers
		
		var sLabel = $(this).attr('title');
		var sText = $(this).text();
		var sTarget = $(this).prop('href');
		
		var oLabel,oButton,oPicker;
		if(typeof sLabel == 'undefined' || sLabel == '')
		{
			oLabel = $('');
		}else{
			oLabel = $('<div class="datepicker-label ix-'+index+'">'+sLabel+'</div>');
		}
		
		if(typeof sText == 'undefined' || sText == '')
		{
			sText = 'Book Online';
		}
		oButton = $('<button type="button" class="datepicker-button ix-'+index+'">Check Availability</button>');	
						
		
		
		oPicker = $('<input class="datepicker-input ix-'+index+'" id="dp-ix-'+index+'" type="text" value=""/>');
		$( oPicker ).datepicker({ minDate:0,maxDate: '+2Y',dateFormat:'DD, d M yy',defaultDate:new Date(), changeMonth:true,changeYear:true});				
		$( oPicker ).attr('readonly', true);
		
		var myTime = parseFloat(getQuerystring('time'));
		var myDefaultDate = new Date();
		myDefaultDate.setTime(myTime);
		
		if(isNaN(myTime))
		{			
			$( oPicker ).datepicker('setDate', '-0d');
		}else{			
			$( oPicker ).datepicker('setDate', myDefaultDate);
		}
				
		
		$( oButton ).click(function() {	
			window.location.href=sTarget+'?time='+$(oPicker).datepicker('getDate').getTime(); 
		});
		
		var oDpCheckin = $('<div class="datepicker-checkin"></div>');
		$(oDpCheckin).append(oLabel, oPicker);
		
		
		$(this).parent().append(oDpCheckin, oButton);			
		
		$( '#dp-ix-'+index ).wrap('<div class="datepicker-formstyle"></div>')
		
		$(this).remove();
		
		
		
	});
		
});

function getQuerystring(key, default_)
{
  if (default_==null) default_=""; 
  key = key.replace(/[\[]/,"\\\[").replace(/[\]]/,"\\\]");
  var regex = new RegExp("[\\?&]"+key+"=([^&#]*)");
  var qs = regex.exec(window.location.href);
  if(qs == null)
    return default_;
  else
    return qs[1];
}

var mapDiv;

function initialize() {
  //Creates a map object.
	
	 var mapOptions = {
	    scrollwheel: false
	  };
	
	
  mapCanvas = new google.maps.Map(mapDiv,mapOptions);
  mapCanvas.setMapTypeId(google.maps.MapTypeId.ROADMAP);
	
  //Creates a infowindow object.
  infoWnd = new google.maps.InfoWindow();

  //Mapping markers on the map
  var bounds = new google.maps.LatLngBounds();
  var station, i, latlng;
  var lastMarker;
  for (i in stationList) {

    //Creates a marker
    station = stationList[i];
    latlng = new google.maps.LatLng(station.latlng[0], station.latlng[1]);
    bounds.extend(latlng);
    var marker = createMarker(
      mapCanvas, latlng, station.name, station.htmlInfo
    );
		
  }
 
  
  
  //Fits the map bounds  // Don't zoom in too far on only one marker
  if (bounds.getNorthEast().equals(bounds.getSouthWest())) {
     var extendPoint1 = new google.maps.LatLng(bounds.getNorthEast().lat() + 0.001, bounds.getNorthEast().lng() + 0.001);
     var extendPoint2 = new google.maps.LatLng(bounds.getNorthEast().lat() - 0.001, bounds.getNorthEast().lng() - 0.001);
     bounds.extend(extendPoint1);
     bounds.extend(extendPoint2);
  }  
  
  mapCanvas.fitBounds(bounds);
}
function createMarker(map, latlng, title, windowHtml) {
  //Creates a marker
  var marker = new google.maps.Marker({
    position : latlng,
    map : map,
    title : title
  });

  //The infoWindow is opened when the sidebar button is clicked
  google.maps.event.addListener(marker, "click", function(){
    infoWnd = new google.maps.InfoWindow();
    infoWnd.setContent(windowHtml);
    infoWnd.open(map, marker);
  });
  return marker;
}

function createMarkerButton(marker) {
  //Creates a sidebar button
  var ul = document.getElementById("marker_list");
  var li = document.createElement("li");
  var title = marker.getTitle();
  li.innerHTML = title;
  ul.appendChild(li);

  //Trigger a click event to marker when the button is clicked.
  google.maps.event.addDomListener(li, "click", function(){
    google.maps.event.trigger(marker, "click");
  });
}

function writeLog(sLog)
{
	if(console)
	{ console.log(sLog)}	
}