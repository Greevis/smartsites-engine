		
		<script src="js/jquery.cycle2.min.js"></script>
		<script src="js/jquery.cycle2.carousel.min.js"></script>
		<script src="js/jquery.cycle2.swipe.min.js"></script>		
		<script src="js/jquery.dotdotdot.min.js"></script>
		<script src="js/lightbox.min.js"></script>		
		<link href="css/lightbox.css" rel="stylesheet" />		
		
		<script src="js/js.js"></script>
		<script src="https://maps.googleapis.com/maps/api/js?key=AIzaSyB9yaIoZlsvDLL66hCTO6BFA82tQMSeObc&sensor=false"></script>		
		<link href="https://fonts.googleapis.com/css?family=Open+Sans:400italic,300,400,600,700,800" rel="stylesheet" type="text/css"/>
		
		<script src="js/responsive-nav.js"></script>
    <script>
      var navigation = responsiveNav(".nav-collapse", {
        animate: true,                    // Boolean: Use CSS3 transitions, true or false
        transition: 284,                  // Integer: Speed of the transition, in milliseconds
        label: "Menu",                    // String: Label for the navigation toggle
        insert: "after",                  // String: Insert the toggle before or after the navigation
        customToggle: "",                 // Selector: Specify the ID of a custom toggle
        closeOnNavClick: false,           // Boolean: Close the navigation when one of the links are clicked
        openPos: "relative",              // String: Position of the opened nav, relative or static
        navClass: "nav-collapse",         // String: Default CSS class. If changed, you need to edit the CSS too!
        navActiveClass: "js-nav-active",  // String: Class that is added to <html> element when nav is active
        jsClass: "js",                    // String: 'JS enabled' class which is added to <html> element
        init: function(){},               // Function: Init callback
        open: function(){},               // Function: Open callback
        close: function(){}               // Function: Close callback
      });
      
      $(".ellipsis").dotdotdot( {watch: "window" , ellipsis	: '... ',after: "a.readmore"} );
      
    </script>
		
		<style>
		%SITE_CUSTOM_CSS%
		%PAGE_CUSTOM_CSS%
		</style>
		
		%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%
		
	</head>
	<body class="bodyStyle">
		
		
		<div id="pageHeader">
			<div class="row">
				<div class="headerLeft">
					<a href="index.html" title="Motel Association of New Zealand" class="manzLogo">
						Motel Association of New Zealand
					</a>
				</div>
				<div class="headerRight">
		    	<h2 class="siteTitle">%SITE_NAME%</h2>
			    <div class="nav1">
			    	%SITE_CUSTOM_CONTENT_1%
			    </div>
			    <div class="nav2">
						<nav class="nav-collapse">
			    	 	%UL_NAV_1L%	
						</nav>
			    </div>
			  </div>
		  </div>
		</div>
		
						