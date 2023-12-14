
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
		
		<script type="text/javascript" charset="utf-8" src="https://maps.googleapis.com/maps/api/js?key=AIzaSyB9yaIoZlsvDLL66hCTO6BFA82tQMSeObc"></script>
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
		.pageArticles .event-complete .event-name { color:%COLOUR2%; }
		#headerNav, #footerNav,
		.pageContainer .pageRTDP h2.roomtype-category,
		.pageContainer a.deal-button { background-color:%COLOUR2%; }
		
		/* color 1 */
		.propertyInfo h3 a,
		.propertyInfo h3,
		.propertyInfo h2,
		.pageContainer h1,
		.homeContainer h1,
		.homeArticles .desc-cap,
		.pageRTDP .rwrRoomtype .desc-cap,
		.pageArticles .event-complete .event-venue,
		.pageArticles .event-complete .event-daterange,
		.pageContainer h3,
			.homeArticles .propPrev-events,
			.homeArticles .propNext-events,
			.homeArticles .propPrev-roomtypes,
			.homeArticles .propNext-roomtypes,
			.homeArticles .event-name a,
			.homeArticles h2 { color:%COLOUR1%; }
		.pageRTDP .book-roomtype,
		.buttonSend,
		.datepicker-button { background-color:%COLOUR1%; }
		
		</style>
		
		%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%
		
		<!--[if lte IE 8]>
			<link rel="stylesheet" type="text/css" href="css/ie.css" />
		<![endif]-->
	
<link type="text/css" rel="stylesheet" href="https://fonts.googleapis.com/css?family=Source+Sans+Pro:200,300,400,400italic,600,700,900" />
%SITE_CUSTOM_CONTENT_1%

<style>
html, body {
	margin:0;
	padding:0;
	font-family:'Source Sans Pro', 'sans-serif';
	font-size:16px;
	font-weight:400;
	color:#444;
}
</style>

</head>
	
<body>
	
	<div id="headerBlock">
		<div class="row">
			
			<div class="headerLogo"> <!-- area to add your custom logo via css --> </div>
			
			<div class="propertyInfo"> <!-- automatically generated property info from Webrooms that could be styled via css --> 
					<h3 class="font"><a href="%SITE_URL%" title="%PROPERTY_NAME%">%PROPERTY_NAME%</a></h3>
					<div class="propertyTitle"> <!-- custom content area where you can add a keyword rich title explaining your property -->
						<h2> %SITE_CUSTOM_CONTENT_2% </h2>
					</div>
					<div class="icoLocation"> <!-- unwanted property fields can be hidden via css -->
						<div class="propertyAddress">%PROPERTY_STREETADDRESS%, </div>
						<div class="propertySuburb">%PROPERTY_SUBURB%, </div>
						<div class="propertyCity">%PROPERTY_CITY%, </div>
						<div class="propertyRegion">%PROPERTY_REGION%, </div>
						<div class="propertyCountru">%PROPERTY_COUNTRY%</div>
					</div>
					<div class="icoPhone"> <!-- unwanted dash can be hidden via css -->
						<div class="propertyFreephone">%PROPERTY_FREEPHONE_LABEL%</div>
						<div class="dash">-</div> 
						<div class="contactPhone">%PROPERTY_TOLLPHONE_LABEL%</div>
					</div>
			</div>

			<div class="bookingBox"> <!-- datepicker booking box --> 
				<div id="headerBooking">	
					%JQUERY_DATE_PICKER%
				</div>
			</div>
			
			<div class="headerIcons"> <!-- custom content area where you could add header icons etc --> 
				%SITE_CUSTOM_CONTENT_3%
			</div>

		</div>
	</div>
	
	<div class="row headerRel">	
		<div id="headerNav">
			<div class="mobile">%PROPERTY_NAME%</div>
			<nav class="nav-collapse">
				%UL_NAV_1L%
			</nav>
	  </div>
	</div>
	