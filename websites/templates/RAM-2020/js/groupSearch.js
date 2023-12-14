// use in conjunction with https://secure.web-rooms.co.nz/js/groupSearch_core.js

var datePickerDateFormat = 	'[<div class="dp-dateouter">]'+
															'[<div class="dp-dayname">]dddd[</div>]'+
															'[<div class="dp-date">]D[</div>]'+
															'[<div class="dp-monthyear">]'+
																'[<div class="dp-month">]MMM[</div>]'+
																'[<div class="dp-year">]YYYY[</div>]'+
															'[</div>]'+
														'[</div>]';

var ajaxBaseUrl = 'https://secure.web-rooms.co.nz';

var datePickerSeparator = '<div class="dp-separator">to</div>';

var numDigitsAfterDecimal = 2;
var currencySymbol = '$';

var thirdPartyGroupType = 49;
var tpgthash = 'cc09db94b4a7ec5d783e0eff1ab2d0b2';
var googleSearchLimit = {lat: -38.12212933205879, lng: 176.27566696792, rad:15000, com:'country:nz'};

var searchPageAddress = 'search.html';
var searchLocationDefaults = {locationType:'administrative_area_level_2', page:searchPageAddress, lat: -38.1368478, lng: 176.24974610000004}


var dashboardUrl = 'guest-dashboard.html';

var pinMarker;
var greenMarker;
var greyMarker;
var blueMarker;

$( document ).ready(function() {

	pinMarker = {
								url: '/templates/admin/images/NeedleLeftYellow2.png',			
								anchor: new google.maps.Point(18, 29) // pinpoint
							};
								
	greenMarker = {
								url: 'https://maps.google.com/mapfiles/ms/icons/green-dot.png',			
								anchor: null 
							};							
							
	greyMarker = {
								url: 'https://maps.google.com/mapfiles/ms/micons/grey.png',			
								anchor: null 
							};
							
	blueMarker = {
								url: 'https://maps.google.com/mapfiles/ms/icons/blue-dot.png',			
								anchor: null 
							};
	
});

/* common below */

