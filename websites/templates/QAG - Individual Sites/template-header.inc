<script src="%GLOBAL_ROOT%websites/common/js/jquery.cycle2.min.js"></script>
<script src="%GLOBAL_ROOT%websites/common/js/jquery.cycle2.carousel.min.js"></script>
<script src="%GLOBAL_ROOT%websites/common/js/jquery.cycle2.swipe.min.js"></script>
<script src="%GLOBAL_ROOT%websites/common/js/jquery.dotdotdot.min.js"></script>
<script src="%GLOBAL_ROOT%websites/common/js/responsive-nav.js"></script>
<script src="%GLOBAL_ROOT%websites/common/js/lightbox.min.js"></script>
<link href="%GLOBAL_ROOT%websites/common/css/lightbox.css" rel="stylesheet" />

<script src="js/js.js"></script>
<script type="text/javascript" charset="utf-8" src="https://maps.googleapis.com/maps/api/js?key=AIzaSyB9yaIoZlsvDLL66hCTO6BFA82tQMSeObc&amp;sensor=false"></script>
%WEBROOMS_JS_INCLUDE%

<link href="%GLOBAL_ROOT%websites/common/css/css_articles_16v1.css" rel="stylesheet" />	
<link href="%GLOBAL_ROOT%websites/common/css/css_buttons_16v1.css" rel="stylesheet" />	
<link href="%GLOBAL_ROOT%websites/common/css/css_common_16v1.css" rel="stylesheet" />	
<link href="%GLOBAL_ROOT%websites/common/css/css_datepicker_16v1.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_forms_16v1.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_grid960.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_nav-responsive.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_roomtypes_16v1.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_social_16v1.css" rel="stylesheet" />

<style>
html, body {
margin:0;
padding:0;
font-family: 'Open Sans', sans-serif;
font-size:14px;
font-weight:400;
color:#444;
}
%SITE_CUSTOM_CSS%
%PAGE_CUSTOM_CSS%
/* color 2 */
h2,
.propertyTitle a,
.pageRTDP h2.roomtype-category,
.event-name a, .event-name { color:#2E95C0; color:%COLOUR2%; }
#footerNav,
.buttonSend,
#headerBlock,
.headerNavbar,
#homeBoxes h2.pageTitle  { background-color:#2E95C0; background-color:%COLOUR2%; }
/* color 1 */
h3 { color:#333; color:%COLOUR1%; }
</style>
<!--[if lte IE 8]>
<link rel="stylesheet" type="text/css" href="css/styles_ie.css" />
<![endif]-->
%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%
<link href='https://fonts.googleapis.com/css?family=Open+Sans:300,400,600,700,800,300italic,400italic,600italic,700italic,800italic' rel='stylesheet' type='text/css'>
<link rel="shortcut icon" type="image/x-icon" href="images/favicon.ico" />

<script>
	$(document).ready(function() {
	   $('.slide0').cycle({
				fx: 'fade', 
				timeout: 4000,
				slides: '> div',
				next: '.propNext-roomtypes',
				prev: '.propPrev-roomtypes'
		});
	});
</script>
<script> 
		$(document).ready(function() {
			$(".ellipsis").dotdotdot({
				ellipsis	: '... ',
			});
		});
</script>
%SITE_CUSTOM_CONTENT_1%
</head>

<body>

<div id="topBar">
	<div class="row">
		<h3 class="propertyTitle">
			<a href="index.html" title="%PROPERTY_NAME%">
				%PROPERTY_NAME%
			</a>
		</h3>
		<div class="propertyContact"> 
			<div class="icoLocation">
				<div class="propertyAddress">%PROPERTY_STREETADDRESS%, </div>
				<div class="propertyCity">%PROPERTY_CITY%, </div>
				<div class="propertyRegion">%PROPERTY_REGION%</div>
			</div>
			<div class="icoPhone">
				<div class="propertyFreephone">%PROPERTY_FREEPHONE_LABEL%</div>
				<div class="dash">-</div> 
				<div class="contactPhone">%PROPERTY_TOLLPHONE_LABEL%</div>
			</div>
		</div>
	</div>
</div>	

<div id="headerBlock">
<div class="row">
<div class="headerLogo">
	<a href="index.html" title="%PROPERTY_NAME%"> 
		<!-- area to add your custom logo via css --> 
		%SITE_CUSTOM_CONTENT_2%
	</a>
</div>
<div class="headerBook">
		%JQUERY_DATE_PICKER%
</div>
<div class="headerNavbar">
		<div class="mobile">%PROPERTY_NAME%</div>
		<nav class="nav-collapse">
			%UL_NAV_1L%
		</nav>
</div>
</div>
</div>