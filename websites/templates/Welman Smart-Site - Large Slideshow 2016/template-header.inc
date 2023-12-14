<script src="%GLOBAL_ROOT%js/jquery.cycle2.min.js"></script>
<script src="js/jquery.cycle2.carousel.min.js"></script>
<script src="js/jquery.cycle2.swipe.min.js"></script>
<script src="js/responsive-nav.js"></script>
<script src="js/lightbox.min.js"></script>
<script src="js/jquery.dotdotdot.min.js"></script>
<script src="js/js.js"></script>
<link href="css/lightbox.css" rel="stylesheet" />

<link href="%GLOBAL_ROOT%websites/common/css/font-awesome/css/font-awesome.min.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_grid960.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_articles_16v1.css" rel="stylesheet" />	
<link href="%GLOBAL_ROOT%websites/common/css/css_buttons_16v1.css" rel="stylesheet" />	
<link href="%GLOBAL_ROOT%websites/common/css/css_common_16v1.css" rel="stylesheet" />	
<link href="%GLOBAL_ROOT%websites/common/css/css_datepicker_16v1.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_forms_16v1.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_nav-responsive.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_roomtypes_16v1.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_social_16v1.css" rel="stylesheet" />

<script type="text/javascript" charset="utf-8" src="https://maps.googleapis.com/maps/api/js?key=AIzaSyB9yaIoZlsvDLL66hCTO6BFA82tQMSeObc&amp;sensor=false"></script>
%WEBROOMS_JS_INCLUDE%

<script> 
		$(document).ready(function() {
			$(".ellipsis").dotdotdot({
				ellipsis	: '... ',
			});
		});
</script>

<script>
	$(document).ready(
		function() {$('.slide0').cycle ({
			fx: 'fade', 
			timeout: 4000,
			slides: '> div',
			next: '.propNext-roomtypes',
			prev: '.propPrev-roomtypes'
		});
	});
</script>

<style>
	%SITE_CUSTOM_CSS%
	%PAGE_CUSTOM_CSS%
	/* color 1 */
	.rwrRoomtype h2,
	.pageArticles .event-complete .event-name,
	.pageContainer h2,
	.pageContainer h3,
	.homeArticles .event-name a,
	#propertyReviews .event-name a { color:%COLOUR1%; }
	/* color 2 */
	.pageContainer h1,
	.homeContainer h1,
	.pageRTDP h2.roomtype-category { color:%COLOUR2%; }
	.buttonSend,
	.rwrRoomtype .book-roomtype,
	a.event-link,
	a.btn, .btn,
	#footerBlock { background-color:%COLOUR2%; }	
	h1.pageTitle { color:%COLOUR2%; }
	#topBar,
	#headerBlock .headerNavbar ul.nav li a:hover { background-color:%COLOUR2%; }
@media only screen and (max-width: 960px) 
{
	.headerNavbar { background-color:%COLOUR2%; }
}
</style>

%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%
	
<link href='https://fonts.googleapis.com/css?family=Open+Sans:300,300italic,400,400italic,600,600italic,700,700italic,800,800italic' rel='stylesheet' type='text/css'>
%SITE_CUSTOM_CONTENT_1%

</head>
	
<body class="bodyStyle">
	
<div id="topBar">
	<div class="row">
		<div class="topName">%PROPERTY_NAME%</div>
		<div class="contactInfo">
			<div class="icoMap">
				<i class="fa fa-map-marker"></i>
					<div class="propertyAddress">%PROPERTY_STREETADDRESS%, </div>
					<div class="propertySuburb">%PROPERTY_SUBURB%, </div>
					<div class="propertyCity">%PROPERTY_CITY%, </div>
					<div class="propertyRegion">%PROPERTY_REGION%, </div>
					<div class="propertyCountry">%PROPERTY_COUNTRY%</div>
			</div>
			<div class="icoPhone">
				<i class="fa fa-mobile"></i>
					<div class="propertyFreephone">%PROPERTY_FREEPHONE_LABEL%</div>
					<div class="dash">-</div> 
					<div class="contactPhone">%PROPERTY_TOLLPHONE_LABEL%</div>
			</div>
			<div class="social">
				%FACEBOOK_PAGELINK% %TWITTER_PAGELINK% %GOOGLEPLUS_PAGELINK% %TRIPADVISOR_PAGELINK%
			</div>
		</div>
	</div>
</div>
	
<div id="headerBlock" class="clear">
	<div class="row">
			<a href="/" title="%PROPERTY_NAME%" class="logoLeft">
				<div class="propertyLogo"></div> <!-- area to add your custom logo via css -->
			</a>
			<div class="bookingBox">
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