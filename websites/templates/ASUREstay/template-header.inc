
<script src="js/jquery.cycle2.min.js"></script>
<script src="js/jquery.cycle2.carousel.min.js"></script>
<script src="js/jquery.cycle2.swipe.min.js"></script>		
<script src="js/jquery.dotdotdot.min.js"></script>
<script src="js/lightbox.min.js"></script>		
<link href="css/lightbox.css" rel="stylesheet" />		

<script src="js/moment.js" type="text/javascript"></script>
<script src="js/jquery.daterangepicker.js" type="text/javascript"></script>
		
<script src="js/js.js"></script>
<script src="js/groupSearch.js"></script>
<script src="%STATIC_WEBROOMSCDN_URL%js/groupSearch_core.js"></script>
<script src="%STATIC_WEBROOMSCDN_URL%js/jquery.cookie.js"></script>

<script src="https://maps.googleapis.com/maps/api/js?key=AIzaSyB9yaIoZlsvDLL66hCTO6BFA82tQMSeObc&libraries=places,geometry"></script>		
<link href="https://fonts.googleapis.com/css?family=Open+Sans:300italic,400italic,300,400,600,700,800" rel="stylesheet" type="text/css"/>
<link href='https://fonts.googleapis.com/css?family=Yellowtail' rel='stylesheet' type='text/css'>
<script src="%STATIC_WEBROOMSCDN_URL%js/markerClusterer.js"></script>

<link rel="stylesheet" href="css/search.css" type="text/css"/>
<link rel="stylesheet" href="css/daterangepicker.css" type="text/css"/>
<link rel="stylesheet" href="css/forms.css" type="text/css"/>
<link rel="icon" type="image/ico" href="images/favicon.ico" />

<style>
%SITE_CUSTOM_CSS%
%PAGE_CUSTOM_CSS%
</style>
<script>

$(document).ready(function() {
	$(".ASURE .result-outer .result-description").dotdotdot({
		ellipsis	: '... ',
	});
});
/* Set the width of the side navigation */
function openNav() {
    document.getElementById("ASUREsidenav").style.width = "300px";
}
function closeNav() {
    document.getElementById("ASUREsidenav").style.width = "0";
}
</script>
%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%

</head>
<body class="bodyStyle">

<div id="ASUREsidenav" class="sidenav">
  <a href="javascript:void(0)" class="closebtn" onclick="closeNav()">&times;</a>
  <img class="menuLogo" src="images/logo_asure.png" alt="ASURE" />
  <div class="navInner">
	  <h3>Find Accommodation</h3>
	  <ul>
	  	<li><a href="index.html">Home</a></li>
	  	<li><a href="search.html">Search</a></li>
	  	<li><a href="members.html">Members</a></li>
	  	<li><a href="guest-dashboard.html">Guest Profile</a></li>
	  </ul>
	  <h3>About ASURE</h3>
	  <ul>
	  	<li><a href="about.html">About</a></li>
	  	<li><a href="promotions.html">Promotions</a></li>
	  	<li><a href="mobile.html">Mobile App</a></li>	
	  	<li><a href="vouchers.html">Vouchers</a></li>	
			<li><a href="contact.html">Contact</a></li>	
	  </ul>
	  <h3>Discover New Zealand</h3>
	  <ul>
			<li><a href="cycle-trails.html">Cycle Trails</a></li>	
			<li><a href="golf-courses.html">Golf Courses</a></li>	
			<li><a href="hobbiton.html">Hobbiton Tours</a></li>	
	  </ul>
  </div>
</div>

<div class="menuBtn">
<span onclick="openNav()">&equiv;</span>
</div>

%GROUP_GUEST_LOGIN%
