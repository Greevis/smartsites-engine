
		<script src="%GLOBAL_ROOT%js/jquery.cycle2.min.js"></script>
		<script src="js/jquery.cycle2.carousel.min.js"></script>
		<script src="js/jquery.cycle2.swipe.min.js"></script>
		<script src="js/lightbox.min.js"></script>
		<script src="js/jquery.dotdotdot.min.js"></script>
		<script src="js/js.js"></script>
		<link href="css/lightbox.css" rel="stylesheet" />
		<link href="css/responsive_960grid.css" rel="stylesheet" />
		<link href="css/host.css" rel="stylesheet" />
		<link rel="shortcut icon" type="image/x-icon" href="images/favicon.ico" />
		
		<script type="text/javascript" charset="utf-8" src="https://maps.googleapis.com/maps/api/js?key=AIzaSyB9yaIoZlsvDLL66hCTO6BFA82tQMSeObc&amp;sensor=false"></script>

    <script> 
      $(".ellipsis").dotdotdot( {watch: "window" , ellipsis	: '...',after: "a.readmore"} );
    </script>
		
		<style>
		%SITE_CUSTOM_CSS%
		%PAGE_CUSTOM_CSS%
		
		html, body {
				  margin: 0;
				  padding: 0;
				  font-family: 'Source Sans Pro', 'sans-serif';
				  font-size: 16px;
				  color: #444;
				  background: #eee;
				  font-weight: 400;
			}
		</style>
		
		%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%
		
		<!--[if lte IE 8]>
			<link rel="stylesheet" type="text/css" href="css/ie.css" />
		<![endif]-->
	
<link type="text/css" rel="stylesheet" href="http://fonts.googleapis.com/css?family=Source+Sans+Pro:200,300,400,400italic,600,700,700italic,900" />
<link type="text/css" rel="stylesheet" href="http://fonts.googleapis.com/css?family=Oswald:300,400,700">

%SITE_CUSTOM_CONTENT_1%

</head>

<body class="pageBackground">
	
<div id="headerBlock">
	<div class="row">
		<div class="ASURElogo">
			<a href="/" title="ASURE %SUBCATEGORY_NAME% Accommodation">
				<img src="images/logo_asure.png" alt="ASURE %SUBCATEGORY_NAME% Accommodation New Zealand" />
			</a>
		</div>
		<div class="propertyInfo">
				<h3>ASURE %SUBCATEGORY_NAME% Accommodation</h3>
				<h4>Your Comfort is ASUREd</h4>
				<p>Book Your %SUBCATEGORY_NAME% Accommodation Online<br />
					%SUBCATEGORY_NAME% Motels, Apartments, Motor Inns, &amp; Motor Lodges</p>
		</div>
		<div class="nzmade">
			<img src="images/logo_nzmade.png" alt="New Zealand Made" />
		</div>
	</div>
</div>

<div id="headerBook">
	<div class="row">	
		<div class="bookingBox">
			<h4>Check Our Live Availability, Rates and Book Online</h4>
			%JQUERY_DATE_PICKER_CUSTOM_PAGE["Check In Date:","Check Availability / Book Online","index.html"]%
		</div>
	</div>
</div>