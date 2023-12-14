<script src="js/jquery.cycle2.min.js"></script>
<script src="js/jquery.cycle2.carousel.min.js"></script>
<script src="js/jquery.cycle2.swipe.min.js"></script>		
<script src="js/jquery.dotdotdot.min.js"></script>
<script src="js/lightbox.min.js"></script>		
<link href="css/lightbox.css" rel="stylesheet" />		

<script src="js/moment.js"></script>
<script src="js/jquery.daterangepicker.js"></script>
		
<script src="js/js.js"></script>
<script src="js/groupSearch.js"></script>
<script src="%STATIC_WEBROOMSCDN_URL%js/groupSearch_core.js"></script>
<script src="%STATIC_WEBROOMSCDN_URL%js/jquery.cookie.js"></script>

<script src="https://maps.googleapis.com/maps/api/js?key=AIzaSyB9yaIoZlsvDLL66hCTO6BFA82tQMSeObc&libraries=places,geometry"></script>		
<link href="https://fonts.googleapis.com/css?family=Open+Sans:300italic,400italic,300,400,600,700,800" rel="stylesheet" type="text/css"/>
<link href='https://fonts.googleapis.com/css?family=Yellowtail' rel='stylesheet' type='text/css'>

<link rel="stylesheet" href="css/bootstrap.css" type="text/css"/>
<link rel="stylesheet" href="css/search.css" type="text/css"/>
<link rel="stylesheet" href="css/daterangepicker.css" type="text/css"/>
<link rel="stylesheet" href="css/forms.css" type="text/css"/>
<link rel="icon" type="image/ico" href="images/favicon.png" />

<!--Google Fonts -->
<link href="https://fonts.googleapis.com/css?family=Zilla+Slab:400,400i" rel="stylesheet"> 

<style>
%SITE_CUSTOM_CSS%
%PAGE_CUSTOM_CSS%
</style>
<script>

$(document).ready(function() {
	$(".LAM .result-outer .result-description").dotdotdot({
		ellipsis	: '... ',
	});
});
/* Set the width of the side navigation */
function openNav() {
    document.getElementById("LAMsidenav").style.width = "300px";
}
function closeNav() {
    document.getElementById("LAMsidenav").style.width = "0";
}
</script>
%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%

</head>
<body class="bodyStyle">
<!-- Facebook Pixel Code -->

<script>
!function(f,b,e,v,n,t,s)
{if(f.fbq)return;n=f.fbq=function(){n.callMethod?
n.callMethod.apply(n,arguments):n.queue.push(arguments)};
if(!f._fbq)f._fbq=n;n.push=n;n.loaded=!0;n.version='2.0';
n.queue=[];t=b.createElement(e);t.async=!0;
t.src=v;s=b.getElementsByTagName(e)[0];
s.parentNode.insertBefore(t,s)}(window,document,'script',
'https://connect.facebook.net/en_US/fbevents.js');
 fbq('init', '347931522039090'); 
fbq('track', 'PageView');
</script>
<noscript>
 <img height="1" width="1" 
src="https://www.facebook.com/tr?id=347931522039090&ev=PageView
&noscript=1"/>
</noscript>
<!-- End Facebook Pixel Code -->

<div id="LAMsidenav" class="sidenav">
  <a href="javascript:void(0)" class="closebtn" onclick="closeNav()">&times;</a>
  <img class="menuLogo" src="images/LAM-logo.png" alt="Look After Me" />
  <div class="navInner">
	  <h3>Find Accommodation</h3>
	  <ul>
	  	<li><a href="index.html">Home</a></li>
	  	<li><a href="search.html">Search</a></li>
	  	<li><a href="hosting.html">Hosting</a></li>
	  	<li><a href="guest-dashboard.html">My Bookings</a></li>
	  	<!-- <li><a href="vouchers.html">Gift Vouchers</a></li> -->
	  </ul>
	  <h3>Look After Me</h3>
	  <ul>
	  	<li><a href="blog.html">Blog</a></li>
	  	<li><a href="press-room.html">Press Room</a></li>
			<li><a href="contact.html">Contact</a></li>	
			<li><a href="about.html">About</a></li>
	  </ul>
  </div>
</div>
<div class="menuBtn">
<span onclick="openNav()">&equiv;</span>
</div>




%GROUP_GUEST_LOGIN%
