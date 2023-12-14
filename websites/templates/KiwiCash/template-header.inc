<script type="text/javascript" src="js/moment.js"></script>
<script type="text/javascript" src="js/jquery.daterangepicker.js"></script>
<script type="text/javascript" src="js/js.js"></script>
<script type="text/javascript" src="js/groupSearch.js"></script>
<script type="text/javascript" src="%STATIC_WEBROOMSCDN_URL%js/groupSearch_core.js"></script>
<script type="text/javascript" src="%STATIC_WEBROOMSCDN_URL%js/jquery.cookie.js"></script>
<script type="text/javascript" src="https://maps.googleapis.com/maps/api/js?key=AIzaSyCC_44rvvwI-1eIyM6VBXvPUwBmnRZxuEw&libraries=places,geometry"></script>		
%WEBROOMS_JS_INCLUDE%

<link rel="stylesheet" type="text/css" href="css/bootstrap.css">
<link rel="stylesheet" type="text/css" href="css/custom.css">
<link rel="stylesheet" type="text/css" href="css/menu.css">
<link rel="stylesheet" type="text/css" href="css/search.css">
<link rel="stylesheet" type="text/css" href="css/daterangepicker.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/css_roomtypes_16v2.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/css_datepicker_16v2.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/font-awesome/css/font-awesome.min.css">
<link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.3.1/css/all.css">

<!-- Bootstrap -->
<link rel="stylesheet" type="text/css" href="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css">
<script src="js/bootstrap.bundle.js"></script>

<style>
	%SITE_CUSTOM_CSS%
	%PAGE_CUSTOM_CSS%
</style>

%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%
<link href="https://fonts.googleapis.com/css?family=Roboto:400,700" rel="stylesheet">

%SITE_CUSTOM_CONTENT_1%

</head>
<body class="bodyStyle">

 <!-- Navigation -->
    <nav class="navbar navbar-expand-lg bg-white fixed-top text-uppercase" id="mainNav">
      <div class="container-fluid">
			    <a href="%SITE_CUSTOM_CONTENT_3%home/" class="logo"><img src="%SITE_CUSTOM_CONTENT_3%assets/Logos/8822640408/KiwiCamp-Logo.png" title="KiwiCamp" alt="KiwiCamp"></a>	      
        <button class="navbar-toggler navbar-toggler-right text-uppercase bg-primary text-white rounded" type="button" data-toggle="collapse" data-target="#navbarResponsive" aria-controls="navbarResponsive" aria-expanded="false" aria-label="Toggle navigation">
          Menu
          <i class="fa fa-bars"></i>
        </button>
        <div class="collapse navbar-collapse" id="navbarResponsive">
        
          <div class="yellow-btn-div">
          	<a class="btn btn-yellow mr-1 mb-2 mb-lg-0" href="https://kiwicash.web-rooms.com/register" target="_blank" title="Guest login">KIWICASH SIGN UP</a>
          	<a class="btn btn-yellow mb-2 mb-lg-0" href="https://kiwicash.web-rooms.com/" target="_blank" title="Guest login">Dashboard</a>
          </div>
          
          <ul class="navbar-nav ml-lg-auto">
	          
							<!--<li class="current nav-item mx-0 mx-lg-2"><a class="menu-list nav-link px-lg-3 rounded" href="%SITE_CUSTOM_CONTENT_3%" title="Home">Home</a>-->
							<li class="link nav-item"><a class="menu-list nav-link px-lg-2" href="%SITE_CUSTOM_CONTENT_3%search/" title="Search">Find KiwiCamps</a>
							<!--<li class="link nav-item"><a class="menu-list nav-link px-lg-2" href="%SITE_CUSTOM_CONTENT_3%how-it-works" title="How it works">How it works</a>	-->				
							<li class="link nav-item"><a class="menu-list nav-link px-lg-2" href="%SITE_CUSTOM_CONTENT_3%what-is-kiwi-camp/" title="What is KiwiCamp">What is KiwiCamp</a>
							<li class="link nav-item"><a class="menu-list nav-link px-lg-2" href="%SITE_CUSTOM_CONTENT_3%why-use-kiwicamp/" title="What is KiwiCash">What is KiwiCash</a>					
							<li class="link nav-item"><a class="menu-list nav-link px-lg-2" href="%SITE_CUSTOM_CONTENT_3%find-a-key/" title="Find A Key">Find A Key</a>								   					  
							<!--<li class="link nav-item"><a class="menu-list nav-link px-lg-2" href="%SITE_CUSTOM_CONTENT_3%get-a-kiwicamp/" title="Become an operator">Become an operator</a>	-->				   					  
							<!--<li class="link nav-item"><a class="menu-list nav-link px-lg-2" href="%SITE_CUSTOM_CONTENT_3%our-story/" title="Our Story">Our Story</a>-->			 				  												  
							<li class="link nav-item"><a class="menu-list nav-link px-lg-2" href="%SITE_CUSTOM_CONTENT_3%contact-us/" title="Contact">Contact</a>
							   					  
          </ul>
          
        </div>
      </div>
    </nav>
    
 <!-- login modal -->    
 <div class="modal fade" id="exampleModal" tabindex="-1" role="dialog" aria-labelledby="exampleModalLabel" aria-hidden="true">
  <div class="modal-dialog" role="document">
    <div class="modal-content">
      <div class="modal-header">
        <h5 class="modal-title" id="exampleModalLabel">Guest Login</h5>
        <button type="button" class="close" data-dismiss="modal" aria-label="Close">
          <span aria-hidden="true">&times;</span>
        </button>
      </div>
      <div class="modal-body">
        <form>
          <div class="form-group">
            <label for="recipient-name" class="col-form-label">Email Address:</label>
            <input type="text" class="form-control" id="recipient-name">
          </div>
          <div class="form-group">
            <label for="password" class="col-form-label">Password:</label>
            <input type="password" class="form-control" id="password">
          </div>
        </form>
        <ul>
        <li><i class="fa fa-lock"></i> Forget Password</li>
        <li><i class="fa fa-user"></i> Create Profile</li>
        </ul>
      </div>
      <div class="modal-footer">
        <button type="button" class="btn btn-secondary" data-dismiss="modal">Close</button>
        <button type="button" class="btn booking-btn text-white btn-primary">Login</button>
      </div>
    </div>
  </div>
</div>
