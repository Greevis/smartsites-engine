<script src="js/js.js"></script>
<link href="%GLOBAL_ROOT%websites/common/css/font-awesome/css/font-awesome.min.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_grid.css" rel="stylesheet" /> <!-- new -->
<link href="%GLOBAL_ROOT%websites/common/css/css_articles_16v2.css" rel="stylesheet" /> <!-- new -->
<link href="%GLOBAL_ROOT%websites/common/css/css_articles-home_16v1.css" rel="stylesheet" /> <!-- new -->
<link href="%GLOBAL_ROOT%websites/common/css/css_buttons_16v2.css" rel="stylesheet" />	 <!-- new -->
<link href="%GLOBAL_ROOT%websites/common/css/css_common_16v2.css" rel="stylesheet" /> <!-- new -->
<link href="%GLOBAL_ROOT%websites/common/css/css_datepicker_16v1.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_forms_16v2.css" rel="stylesheet" /> <!-- new -->
<link href="%GLOBAL_ROOT%websites/common/css/css_nav-responsive.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_roomtypes_16v1.css" rel="stylesheet" />
<link href="%GLOBAL_ROOT%websites/common/css/css_social_16v1.css" rel="stylesheet" />
<script type="text/javascript" charset="utf-8" src="https://maps.googleapis.com/maps/api/js?key=AIzaSyB9yaIoZlsvDLL66hCTO6BFA82tQMSeObc&amp;sensor=false"></script>
%WEBROOMS_JS_INCLUDE%

<style>
	%SITE_CUSTOM_CSS%
	%PAGE_CUSTOM_CSS%
	/* color 1 */
	.footerContact .contactDiv .fa-circle,
	.footerContact h2 { color:%COLOUR1%; }
	/* color 2 */
	h2,
	.event-name,
	#propertyReviews .event-name,
	.contactDiv .fa { color:%COLOUR2%; }
	.nav-collapse,
	.buttonSend,
	.book-roomtype,
	a.event-link,
	a.btn, .btn,
	#footerBlock,
	.headerNavbar { background-color:%COLOUR2%; }
</style>

%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%
<link href='https://fonts.googleapis.com/css?family=Open+Sans:300,400,400italic,600,700,800' rel='stylesheet' type='text/css'>
%SITE_CUSTOM_CONTENT_1%
</head>

<body class="bodyStyle">
	
<header id="headerBlock">
	<div class="row">
		<div class="headerLogo">
			<a href="/" title="%PROPERTY_NAME%">
				<div class="propertyLogo"></div> <!-- area to add your custom logo via css -->
			</a>
		</div>
		<div class="contactOuter headerContact">
			<h2 class="font">%PROPERTY_NAME%</h2>
		  <div class="contactDiv">
		    <i class="fa fa-map-marker" aria-hidden="true"></i>
					<div class="propertyAddress">%PROPERTY_STREETADDRESS%, </div>
					<div class="propertySuburb">%PROPERTY_SUBURB%, </div>
					<div class="propertyCity">%PROPERTY_CITY%, </div>
					<div class="propertyRegion">%PROPERTY_REGION%, </div>
					<div class="propertyCountry">%PROPERTY_COUNTRY%</div>
		  </div>
		  <div class="contactDiv">
		  	<i class="fa fa-mobile" aria-hidden="true"></i>
					<div class="propertyFreephone">%PROPERTY_FREEPHONE_LABEL%</div>
					<div class="dash">-</div> 
					<div class="contactPhone">%PROPERTY_TOLLPHONE_LABEL%</div>
	    </div>
			<div class="headerBook">
					%JQUERY_DATE_PICKER%
			</div>
		</div>
	</div>
	<div class="headerNavbar">
		<div class="mobile">%PROPERTY_NAME%</div>
		<nav class="nav-collapse">
			%UL_NAV_1L%
		</nav>
	</div>	
</header>