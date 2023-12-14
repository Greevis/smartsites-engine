
		<script src="%GLOBAL_ROOT%js/jquery.cycle2.min.js"></script>
		<script src="js/jquery.cycle2.carousel.min.js"></script>
		<script src="js/jquery.cycle2.swipe.min.js"></script>
		<script src="js/responsive-nav.js"></script>
		<script src="js/lightbox.min.js"></script>
		<script src="js/jquery.dotdotdot.min.js"></script>
		<script src="js/js.js"></script>
		<link href="css/lightbox.css" rel="stylesheet" />
		<link href="css/responsive_960grid.css" rel="stylesheet" />
		
		<link rel="shortcut icon" type="image/x-icon" href="../images/favicon.ico" />
		
		<script type="text/javascript" charset="utf-8" src="https://maps.googleapis.com/maps/api/js?key=AIzaSyB9yaIoZlsvDLL66hCTO6BFA82tQMSeObc&amp;sensor=false"></script>
		%WEBROOMS_JS_INCLUDE%

    <script> 
      $(".ellipsis").dotdotdot( {watch: "window" , ellipsis	: '... ',after: "a.readmore"} );
    </script>
    
		<script>
			$(document).ready(
				function() {
			    $('.slide0').cycle ({
								fx: 'fade', 
								timeout: 4000,
								slides: '> div',
								next: '.propNext-roomtypes',
								prev: '.propPrev-roomtypes'
						});
				});
		</script>
		<script>
			$(document).ready(
				function() {
			    $('#specialsStrip .deals-outer').cycle ({
								fx: 'fade', 
								timeout: 4000,
								slides: '> div',
								next: '.dealNext',
								prev: '.dealPrev'
						});
				});
		</script>
		
		
		<style>
		%SITE_CUSTOM_CSS%
		%PAGE_CUSTOM_CSS%
		
		/* color 1 */
		.propertyInfo h3,
		.propertyInfo a,
		.row h2,
		.homeArticles .event-name a,
		.pageArticles .event-complete .event-name,
		.pageContainer h2,
		#specialsStrip .deal-name h3 { color:%COLOUR2%; }
		#headerNav, #footerNav,
		.pageContainer .pageRTDP h2.roomtype-category,
		#bookingBox, 
		.pageContainer .deal-button { background-color:%COLOUR2%; }
		
		/* color 2 */
		.homeArticles .desc-cap,
		.homeArticles .event-venue,
		.homeArticles .event-daterange,
		.pageRTDP .rwrRoomtype .desc-cap,
		.pageArticles .event-complete .event-venue,
		.pageArticles .event-complete .event-daterange,
		.pageContainer h3 { color:%COLOUR1% }
		
		</style>
		
		%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%
		
		<!--[if lte IE 8]>
			<link rel="stylesheet" type="text/css" href="css/ie.css" />
		<![endif]-->
	
<link type="text/css" rel="stylesheet" href="https://fonts.googleapis.com/css?family=Source+Sans+Pro:200,300,400,400italic,600,700,900" />
<link type="text/css" rel="stylesheet" href="https://fonts.googleapis.com/css?family=Oswald:300,400,700" />
%SITE_CUSTOM_CONTENT_1%

<style>
			html, body {
				margin:0;
				padding:0;
				font-family:'Open Sans', sans-serif;
				font-size:14px;
				line-height:18px;
				letter-spacing:0.3px;
				color:#555;
				background:#f5f5f5;
				font-weight:400;
			}
</style>

</head>
	
<body>

<div class="container">
	<div id="headerBlock">
		<div class="row">
			<div class="columns six propertyInfo">
					<h3 class="font"><a href="%SITE_URL%" title="%PROPERTY_NAME%">%PROPERTY_NAME%</a></h3>
					<div class="icoLocation">
						<div class="propertyAddress">%PROPERTY_STREETADDRESS%, </div>
						<div class="propertySuburb">%PROPERTY_SUBURB%, </div>
						<div class="propertyCity">%PROPERTY_CITY%, </div>
						<div class="propertyRegion">%PROPERTY_REGION%</div>
					</div>
					<div class="icoPhone">
						<div class="propertyFreephone">%PROPERTY_FREEPHONE_LABEL%</div>
						<div class="dash">-</div> 
						<div class="contactPhone">%PROPERTY_TOLLPHONE_LABEL%</div>
					</div>
	  			<div class="badgesBox">
					%SITE_CUSTOM_CONTENT_2%
					</div>
			</div>
			<div class="columns six">
			%SITE_CUSTOM_CONTENT_4%
				<div class="bookingBox">
					<div id="headerBooking">	
						%JQUERY_DATE_PICKER%
					</div>
				</div>
			</div>
		</div>
	</div>
	
	<div id="headerNav">
		<div class="row">
			<div class="mobile">%PROPERTY_NAME%</div>
			<nav class="nav-collapse">
				%UL_NAV_1L%
			</nav>
	  </div>
	</div>
	