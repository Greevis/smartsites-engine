
    <!-- Bootstrap/Plugin CSS -->
    <link href="css/bootstrap.min.css" rel="stylesheet">

    <!-- Custom fonts for this template -->

    <link href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css" rel="stylesheet" type="text/css">
    <link href="https://fonts.googleapis.com/css?family=Open+Sans:400,600,700&display=swap" rel="stylesheet">
    <!-- Custom styles for this template -->
    <link href="css/custom.css" rel="stylesheet">
    <link href="css/datepicker.css" rel="stylesheet">
    <link href="css/lightbox.css" rel="stylesheet">
    <link rel="stylesheet" type="text/css" href="https://cdn.jsdelivr.net/npm/slick-carousel@1.8.1/slick/slick.css"/>
    
    <!-- favicon -->
		<link rel="shortcut icon" type="image/x-icon" href="images/favicon.png" />
		
		<script type="text/javascript" charset="utf-8" src="https://maps.googleapis.com/maps/api/js?key=AIzaSyBkSeSSBYyppgXf_h-HF63jMsSMt9JI9q8&amp;sensor=false"></script>
		%WEBROOMS_JS_INCLUDE%
		
		<style>
		%SITE_CUSTOM_CSS%
		%PAGE_CUSTOM_CSS%
		
		/* color 1 */
		h1 { color:%COLOUR2%; }
		h2 { color:%COLOUR1% }
		
		</style>
		
		%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%
		
		<!--[if lte IE 8]>
			<link rel="stylesheet" type="text/css" href="css/ie.css" />
		<![endif]-->

    %SITE_CUSTOM_CONTENT_1%
    
</head>

<body id="page-top">
   <!-- Navigation -->
    <nav class="navbar navbar-expand-lg bg-primary fixed-top" id="mainNav">
      <div class="container-fluid">
        <a class="navbar-brand js-scroll-trigger" href="#page-top"><img src="images/logo_asure.png" alt="ASURE Accommodation NZ"></a>
        <button class="navbar-toggler navbar-toggler-right text-uppercase bg-primary text-white rounded" type="button" data-toggle="collapse" data-target="#navbarResponsive" aria-controls="navbarResponsive" aria-expanded="false" aria-label="Toggle navigation">
          Menu
          <i class="fa fa-bars"></i>
        </button>
        
        <div class="d-none d-lg-block top-banner">
           <span class="yellow"><a class="yellow" href="asure.html">ASURE Loyalty Programme</a> | 
           <a class="yellow" href="mailto:%RESERVATIONS_REPLYTOEMAIL%">%RESERVATIONS_REPLYTOEMAIL%</a> | 
           <a class="yellow" href="tel:%PROPERTY_FREEPHONE%">%PROPERTY_FREEPHONE%</a></span>
           <a class="btn border bg-primary py-1 px-3 ml-3" href="https://asure.web-rooms.com">Guest Login</a>
        </div>
        
        <div class="collapse navbar-collapse text-uppercase" id="navbarResponsive">
          %UL_NAV_1L%
          <a class="d-lg-none btn py-1 px-3 mx-auto my-1 w-100" href="https://asure.web-rooms.com">Guest Login</a>
        </div>
      </div>
    </nav>
