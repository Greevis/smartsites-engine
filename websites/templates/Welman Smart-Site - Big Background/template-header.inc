
		<script src="%GLOBAL_ROOT%js/jquery.cycle2.min.js"></script>
		<script src="js/jquery.cycle2.carousel.min.js"></script>
		<script src="js/jquery.cycle2.swipe.min.js"></script>
		<script src="js/responsive-nav.js"></script>
		<script src="js/lightbox.min.js"></script>
		<script src="js/jquery.dotdotdot.min.js"></script>
		<script src="js/js.js"></script>
		<link href="css/lightbox.css" rel="stylesheet" />
		<link href="css/responsive_960grid.css" rel="stylesheet" />
		<link href="css/host.css" rel="stylesheet" />
		<link rel="shortcut icon" type="image/x-icon" href="../images/favicon.ico" />
		
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
		<script>
			$(document).ready(
				function() 
				{
			    $('#specialsStrip .deals-outer').cycle
			    (
				    {
								fx: 'fade', 
								timeout: 4000,
								slides: '> div',
								next: '.dealNext',
								prev: '.dealPrev'
						}
					);
				}
			);
		</script>
		
		
		<style>
		%SITE_CUSTOM_CSS%
		%PAGE_CUSTOM_CSS%
		
		/* color 1 */
		.propertyInfo h3,
		.propertyInfo h3 a,
		.row h2,
		.homeArticles .event-name a,
		.pageArticles .event-complete .event-name,
		.pageContainer h2,
		#specialsStrip .deal-name h3 { color:%COLOUR2%; }
		#headerNav, #footerNav,
		.pageContainer .pageRTDP h2.roomtype-category,
		#bookingBox, 
		.pageContainer .deal-button,
		#bookingBar { background-color:%COLOUR2%; }
		
		/* color 2 */
		.homeArticles .desc-cap,
		.homeArticles .event-venue,
		.homeArticles .event-daterange,
		.pageContainer h3 { color:%COLOUR1% }
		
		</style>
		
		%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%
		
		<!--[if lte IE 8]>
			<link rel="stylesheet" type="text/css" href="css/ie.css" />
		<![endif]-->
	
<link type="text/css" rel="stylesheet" href="http://fonts.googleapis.com/css?family=Source+Sans+Pro:200,300,400,400italic,600,700,900" />

%SITE_CUSTOM_CONTENT_1%

<style>
			html, body {
				margin:0;
				padding:0;
				font-family:'Source Sans Pro', 'sans-serif';
				font-size:15px;
				color:#333;
				font-weight:400;
			}
</style>

</head>
	
<body>
	
	<div id="headerBlock">
		<div class="row">
			<div class="headerLogo"> 
					<!-- area to add your custom logo via css --> 
					%SITE_CUSTOM_CONTENT_2%
			</div>
			<div class="propertyInfo">
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
			</div>
			<div class="propertyIcons"> 
					<!-- area to add your custom icons --> 
					%SITE_CUSTOM_CONTENT_4%
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

	<div id="pageBackground">
		<div class="row">
			<div id="pageBorder">
			
			<div id="pageMain" class="pageContainer">
				<div id="headerSlideshow"></div>
				<div id="bookingBar">
					<div class="bookingBox"> <!-- datepicker booking box --> 
							%JQUERY_DATE_PICKER%
					</div>
				</div>
