

loadCSS = function(href) {
   var cssLink = $("<link rel='stylesheet' type='text/css' href='"+href+"'>");
   $("head").append(cssLink); 
};


jQuery.getScript('https://maps.googleapis.com/maps/api/js?key=AIzaSyB9yaIoZlsvDLL66hCTO6BFA82tQMSeObc&libraries=places,geometry',function (){
	jQuery.getScript('https://book.centralres.co.nz/js/groupSearch.js', function (){
	});		
});		
	

jQuery.getScript('https://cdn.web-rooms.com/js/moment.min.js');

jQuery.getScript('https://cdn.web-rooms.com/js/jquery.cookie.js', function (){
	jQuery.getScript('https://cdn.web-rooms.com/js/jquery.daterangepicker.min.js', function (){
		jQuery.getScript('https://cdn.web-rooms.com/js/groupSearch_core.js', function (){
		
		});		
	});	
});	

