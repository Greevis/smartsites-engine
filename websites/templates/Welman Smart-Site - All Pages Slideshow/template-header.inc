
		<script src="%GLOBAL_ROOT%js/jquery.cycle2.min.js"></script>
		<script src="js/jquery.cycle2.carousel.min.js"></script>
		<script src="js/jquery.cycle2.swipe.min.js"></script>
		<script src="js/responsive-nav.js"></script>
		<script src="js/lightbox.min.js"></script>
		<script src="js/jquery.dotdotdot.min.js"></script>
		<script src="js/js.js"></script>
		<link href="css/lightbox.css" rel="stylesheet" />
		<link href="css/responsive_960grid.css" rel="stylesheet" />
		<link rel="shortcut icon" type="image/x-icon" href="images/favicon.ico" />
		
		<script type="text/javascript" charset="utf-8" src="https://maps.googleapis.com/maps/api/js?key=AIzaSyB9yaIoZlsvDLL66hCTO6BFA82tQMSeObc&amp;sensor=false"></script>
		%WEBROOMS_JS_INCLUDE%

    <script> 
      $(".ellipsis").dotdotdot( {watch: "window" , ellipsis	: '... ',after: "a.readmore"} );
    </script>
    
		<script>
			$(document).ready(
				function() 
				{
			    $('.slide0').cycle
			    (
				    {
								fx: 'fade', 
								timeout: 4000,
								slides: '> div',
								next: '.propNext-roomtypes',
								prev: '.propPrev-roomtypes'
						}
					);
				}
			);
		</script>
		
		<style>
		%SITE_CUSTOM_CSS%
		%PAGE_CUSTOM_CSS%

		/* color 2 */
		.row h2,
		.pageContainer h2,
		.homeArticles .event-venue,
		.homeArticles .event-daterange,
		.pageContainer h1,
		.homeContainer h1,		
		.homeArticles h2,
		.homeArticles h2.pageTitle a,
			.homeArticles .propPrev-events,
			.homeArticles .propNext-events,
			.homeArticles .propPrev-roomtypes,
			.homeArticles .propNext-roomtypes,
			#footerContent .font a,
			.pageArticles .event-complete .event-name { color:%COLOUR2%; }
		#footerNav,
		.pageContainer .pageRTDP h2.roomtype-category,
		.bookingBox,
		.homeArticles .event-details a.event-link, 
		.homeArticles .book-roomtype,
				.buttonSend,
				#topBar { background-color:%COLOUR2%; }
		
		/* color 1 */
		.propertyInfo h3 a,
		.propertyInfo h3,
		.propertyInfo h2,
		.homeArticles .desc-cap,
		.pageRTDP .rwrRoomtype .desc-cap,
		.pageArticles .event-complete .event-venue,
		.pageArticles .event-complete .event-daterange,
			.homeArticles .event-name a,
			.homeArticles .rwrRoomtype h2,
		.pageContainer h3 { color:%COLOUR1%; }
		
		</style>
		
		%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%
		
		<!--[if lte IE 8]>
			<link rel="stylesheet" type="text/css" href="css/ie.css" />
		<![endif]-->
	
<link type="text/css" rel="stylesheet" href="https://fonts.googleapis.com/css?family=Source+Sans+Pro:200,300,400,400italic,600,700,900" />
<link href="https://fonts.googleapis.com/css?family=Advent+Pro:100" rel="stylesheet" type="text/css">
%SITE_CUSTOM_CONTENT_1%

<style>
html, body {
	margin:0;
	padding:0;
	font-family:'Source Sans Pro', 'sans-serif';
	font-size:16px;
	font-weight:400;
	color:#444;
	<!-- background:url(/~images/template/background.jpg) top center repeat-x #fafafa; -->
}
@media only screen and (max-width: 960px) {
.logoBox {display:none;}
}
</style>

</head>
	
<body id="body-top">
	
<div id="topBar">

		<div class="propertyTitle">
			<h3>
				<a href="%SITE_URL%" title="%PROPERTY_NAME%">
					%PROPERTY_NAME%
				</a>
			</h3>
		</div>
		<div class="propertyContact"> <!-- automatically generated property info that could be styled via css --> 
			<div class="icoLocation"> <!-- unwanted property fields can be hidden via css -->
				<div class="propertyAddress">%PROPERTY_STREETADDRESS%, </div>
				<div class="propertySuburb">%PROPERTY_SUBURB%, </div>
				<div class="propertyCity">%PROPERTY_CITY%, </div>
				<div class="propertyRegion">%PROPERTY_REGION%</div>
			</div>
			<div class="icoPhone"> <!-- unwanted dash can be hidden via css -->
				<div class="propertyFreephone">%PROPERTY_FREEPHONE_LABEL%</div>
				<div class="dash">-</div> 
				<div class="contactPhone">%PROPERTY_TOLLPHONE_LABEL%</div>
			</div>
		</div>

</div>
 
<div id="homeSlideshow">
	<div class="slideshowGallery">
		%MAIN_GALLERY_SLIDESHOW%
  </div>
<div class="row">
	  <div class="logoBox">
			<a href="%SITE_URL%" title="%PROPERTY_NAME%" class="headerLogo"> 
				<!-- area to add your custom logo via css --> 
				%SITE_CUSTOM_CONTENT_2%
			</a>
		</div>
		<div class="badgesBox">
			<div class="headerIcons"> <!-- custom content area where you could add header icons etc --> 
				%SITE_CUSTOM_CONTENT_3%
			</div>
		</div>
		<div class="bookingBox"> <!-- datepicker booking box --> 
			<div id="headerBooking">	
				%JQUERY_DATE_PICKER%
			</div>
		</div>
	</div>
</div>
<div id="headerNav">
		<div class="row">
			<div class="mobile">%PROPERTY_NAME%</div>
			</div>
			<nav class="nav-collapse">
				%UL_NAV_1L%
			</nav>
  	</div>
</div>

<div class="pageBackground">
	<div class="navShadow"></div>
</div>