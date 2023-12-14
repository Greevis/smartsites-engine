		<script src="%GLOBAL_ROOT%js/jquery.cycle2.min.js"></script>
		<script src="js/jquery.cycle2.carousel.min.js"></script>
		<script src="js/jquery.cycle2.swipe.min.js"></script>
		<script src="js/responsive-nav.js"></script>
		<script src="js/lightbox.min.js"></script>
		<script src="js/jquery.dotdotdot.min.js"></script>
		<script src="js/js.js"></script>
		<link href="css/lightbox.css" rel="stylesheet" />
		
		<link href="%GLOBAL_ROOT%websites/common/css/css_articles_16v1.css" rel="stylesheet" />	
		<link href="%GLOBAL_ROOT%websites/common/css/css_buttons_16v1.css" rel="stylesheet" />	
		<link href="%GLOBAL_ROOT%websites/common/css/css_common_16v1.css" rel="stylesheet" />	
		<link href="%GLOBAL_ROOT%websites/common/css/css_datepicker_16v1.css" rel="stylesheet" />
		<link href="%GLOBAL_ROOT%websites/common/css/css_forms_16v1.css" rel="stylesheet" />
		<link href="%GLOBAL_ROOT%websites/common/css/css_grid960.css" rel="stylesheet" />
		<link href="%GLOBAL_ROOT%websites/common/css/css_nav-responsive.css" rel="stylesheet" />
		<link href="%GLOBAL_ROOT%websites/common/css/css_roomtypes_16v1.css" rel="stylesheet" />
		<link href="%GLOBAL_ROOT%websites/common/css/css_social_16v1.css" rel="stylesheet" />
		
		<script type="text/javascript" charset="utf-8" src="https://maps.googleapis.com/maps/api/js?key=AIzaSyB9yaIoZlsvDLL66hCTO6BFA82tQMSeObc&amp;sensor=false"></script>
		%WEBROOMS_JS_INCLUDE%

    <script> 
      $(".ellipsis").dotdotdot( {watch: "window" , ellipsis	: '... ',after: "a.readmore"} );
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
		html, body {
			margin:0;
			padding:0;
			font-family:'Source Sans Pro', 'sans-serif';
			font-size:16px;
			font-weight:400;
			color:#444;
			background:url(/~images/template/background.jpg) top center repeat-x #fafafa;	}
		%SITE_CUSTOM_CSS%
		%PAGE_CUSTOM_CSS%
		/* color 1 */
		.row h2,
		.pageContainer h2,
		.propertyInfo h3 a,
		.propertyInfo h3,
		.propertyInfo h2,
		.homeArticles .event-venue,
		.homeArticles .event-daterange,
			.homeArticles .event-name a,
			.pageArticles .event-complete .event-name,
			.homeArticles h2 { color:%COLOUR2%; }
		.bookingBox,
		#footerBlock { background-color:%COLOUR2%; }
		/* color 2 */
		.pageContainer h1,
		.homeContainer h1,
		.pageContainer h3,
		.pageRTDP h2.roomtype-category { color:%COLOUR1%; }
		.headerNavbar, #footerNav,
		.buttonSend, 
		.datepicker-button,
		.homeArticles .rwrRoomtype .book-roomtype,
		a.event-link,
		a.btn, .btn { background-color:%COLOUR1%; }
		</style>
		
		%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%
		
		<!--[if lte IE 8]>
			<link rel="stylesheet" type="text/css" href="css/ie.css" />
		<![endif]-->
	
<link type="text/css" rel="stylesheet" href="https://fonts.googleapis.com/css?family=Source+Sans+Pro:200,300,400,400italic,600,700,900" />
%SITE_CUSTOM_CONTENT_1%

</head>
	
<body class="bodyStyle">
	
	<div id="headerBlock">
		<div class="row">
			
			<div class="headerLogo"> <!-- area to add your custom logo via css --> </div>
			
			<div class="propertyInfo"> <!-- automatically generated property info --> 
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
			
			<div class="headerIcons"> <!-- custom content area to add header icons etc --> 
				%SITE_CUSTOM_CONTENT_3%
			</div>

		</div>
	</div>
	
	<div class="headerNavbar">
		<div class="row">
			<div class="mobile">%PROPERTY_NAME%</div>
			<nav class="nav-collapse">
				%UL_NAV_1L%
			</nav>
	  </div>
	</div>
	
	<div class="bookingBox"> <!-- datepicker booking box --> 
		<div class="bookText">Book Direct and Save!</div>
			%JQUERY_DATE_PICKER%
	</div>	
	
<div class="pageBackground">