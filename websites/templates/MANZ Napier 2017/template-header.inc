<script type="text/javascript" src="js/moment.js"></script>
<script type="text/javascript" src="js/jquery.daterangepicker.js"></script>
<script type="text/javascript" src="js/js.js"></script>
<script type="text/javascript" src="js/groupSearch.js"></script>
<script type="text/javascript" src="%STATIC_WEBROOMSCDN_URL%js/groupSearch_core.js"></script>
<script type="text/javascript" src="%STATIC_WEBROOMSCDN_URL%js/jquery.cookie.js"></script>
<script type="text/javascript" src="https://maps.googleapis.com/maps/api/js?key=AIzaSyB9yaIoZlsvDLL66hCTO6BFA82tQMSeObc&libraries=places,geometry"></script>		
%WEBROOMS_JS_INCLUDE%

<link rel="stylesheet" type="text/css" href="css/search.css">
<link rel="stylesheet" type="text/css" href="css/daterangepicker.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/font-awesome/css/font-awesome.min.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/css_grid.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/css_articles_16v2.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/css_articles-home_16v1.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/css_buttons_16v2.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/css_common_16v2.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/css_datepicker_16v2.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/css_forms_16v2.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/css_roomtypes_16v2.css">

<style>
	%SITE_CUSTOM_CSS%
	%PAGE_CUSTOM_CSS%
</style>

%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%
<link rel="stylesheet" type="text/css" href='https://fonts.googleapis.com/css?family=Open+Sans:300,400,400italic,600,700,800'>
<link rel="stylesheet" type="text/css" href='http://fonts.googleapis.com/css?family=Poiret+One'>
%SITE_CUSTOM_CONTENT_1%

<script type="text/javascript">
function openNav() {
    document.getElementById("napierSidenav").style.width = "300px";
}
function closeNav() {
    document.getElementById("napierSidenav").style.width = "0";
}
</script>
<!-- ellipsis for reviews or locals -->
<script type="text/javascript" src="js/jquery.dotdotdot.min.js"></script>
<script type="text/javascript"> 
		$(document).ready(function() {
			$("#homeListings .property-description").dotdotdot({
				ellipsis	: '... ',
			});
		});
</script>
<!-- end -->

</head>
<body class="bodyStyle">
	
<div id="napierSidenav" class="sidenav">
  <a href="javascript:void(0)" class="closebtn" onclick="closeNav()">&times;</a>
  <div class="navInner">
	  <h3>Napier Motel Association</h3>
	  <ul>
	  	<li><a href="index.html">Home</a></li>
	  	<li><a href="search.html">Map Search</a></li>
	  	<li><a href="about-us.html">About Us</a></li>
	  	<li><a href="napier-attractions.html">Napier Attractions</a></li>
	  </ul>
  </div>
</div>

<div class="menuBtn">
<span onclick="openNav()">&equiv;</span>
</div>