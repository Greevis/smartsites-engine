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
if(window.location.href.indexOf('webrooms.dev') > 0)
{
	writeLog('debug URL');
	ajaxBaseUrl = 'https://webrooms.dev64.welman.co.nz'; // debug
}
var dashboardUrl = 'guest-dashboard.html';

var datePickerSeparator = '<div class="dp-separator">to</div>';

var numDigitsAfterDecimal = 2;
var currencySymbol = '$';

var thirdPartyGroupType = 97;
var tpgthash = 'e65f6f05f2c11e9f631110578e1fdcc3';
var googleSearchLimit = {lat: -41.466523958901064, lng: 173.28069092421882, rad:25000, com:'country:nz', exclude:0, categories:0, excludeProperties:1};

var searchPageAddress = 'search.html';
var searchLocationDefaults = {locationType:'country', page:searchPageAddress, lat: -41.466523958901064, lng: 173.28069092421882, proximity:false};

var pinMarker;
var greenMarker;
var greyMarker;
var blueMarker;

$( document ).ready(function() {

	pinMarker = {
								url: 'https://secure.web-rooms.co.nz/templates/admin/images/NeedleLeftYellow2.png',			
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

