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

var thirdPartyGroupType = 16;
var tpgthash = '595ce842bb158b08ccfdfcb785eef5fd';	
var dashboardUrl = 'dashboard.html'; 

var googleSearchLimit = {lat: -41.466523958901064, lng: 173.28069092421882, rad:25000, com:'country:nz', exclude:0, categories:0};

var searchPageAddress = 'index.html';
var searchLocationDefaults = {locationType:'administrative_area_level_2', page:searchPageAddress, lat: -39.485003563534995, lng: 176.87327417872893};

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

