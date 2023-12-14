
		<script src="%GLOBAL_ROOT%js/jquery.cycle2.min.js"></script>
		<script src="js/jquery.cycle2.carousel.min.js"></script>
		<script src="js/jquery.cycle2.swipe.min.js"></script>
		<script src="js/responsive-nav.js"></script>
		<script src="js/lightbox.min.js"></script>
		<script src="js/jquery.dotdotdot.min.js"></script>
		<script src="js/js.js"></script>
		<link href="css/lightbox.css" rel="stylesheet" />
		<link href="css/responsive_960grid.css" rel="stylesheet" />
		
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
		
		/* color 1 */
		.pageContainer h1, .row h2, .pageContainer h3,
		.homeArticles .event-name a,
		.pageArticles .event-complete .event-name { color:%COLOUR2%; }
		#headerNav, #footerNav,
		.pageContainer .pageRTDP h2.roomtype-category { background-color:%COLOUR2%; }
		
		/* color 2 */
		.homeArticles .desc-cap,
		.homeArticles .event-venue,
		.homeArticles .event-daterange,
		.pageRTDP .rwrRoomtype .desc-cap,
		.pageArticles .event-complete .event-venue,
		.pageArticles .event-complete .event-daterange { color:%COLOUR1% }
		
		</style>
		
		%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%
		
		<!--[if lte IE 8]>
			<link rel="stylesheet" type="text/css" href="css/ie.css" />
		<![endif]-->
	
<link href='https://fonts.googleapis.com/css?family=Source+Sans+Pro:200,300,400,400italic,600,700,900' rel='stylesheet' type='text/css' />
%SITE_CUSTOM_CONTENT_1%

<style>
				html, body {
				margin:0;
				padding:0;
				font-family:'Source Sans Pro', 'sans-serif';
				font-size:16px;
				color:#333;
				background:#f5f5f5;
				font-weight:400;
			}
</style>

</head>
	
<body>

	<div id="headerContainer">
		
			<div class="row">
				
					<div id="headerTop">
						<div id="headerCustom1">
								<div class="propertyBadges">
										%SITE_CUSTOM_CONTENT_2%
								</div>
								<div id="headerLogo">
										<h2>%PROPERTY_CITY% Motel Accommodation New Zealand</h2>
										<h3 class="font">%PROPERTY_NAME%</h3>
								</div>
						</div>
					</div>
					
					<div id="headerMiddle">
							<div id="headerContact">
								<div class="icoLocation">
									%PROPERTY_STREETADDRESS%, %PROPERTY_CITY%, %PROPERTY_REGION%
								</div>
								<div class="icoPhone">
									%PROPERTY_FREEPHONE_LABEL% - %PROPERTY_TOLLPHONE_LABEL%
								</div>
							</div>
							<div id="headerBooking">	
								%JQUERY_DATE_PICKER%
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
			
	</div>
	