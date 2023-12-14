<script type="text/javascript" src="js/moment.js"></script>
<script type="text/javascript" src="js/jquery.daterangepicker.js"></script>
<script type="text/javascript" src="js/js.js"></script>
<script type="text/javascript" src="js/groupSearch.js"></script>
<script type="text/javascript" src="%STATIC_WEBROOMSCDN_URL%js/groupSearch_core.js"></script>
<script type="text/javascript" src="%STATIC_WEBROOMSCDN_URL%js/jquery.cookie.js"></script>
<script type="text/javascript" src="https://maps.googleapis.com/maps/api/js?key=AIzaSyBgljOUuOz06xqMYc5vRjuzoIeJjT7ooTU&libraries=places,geometry"></script>		
%WEBROOMS_JS_INCLUDE%

<link rel="stylesheet" type="text/css" href="css/bootstrap.min.css">
<link rel="stylesheet" type="text/css" href="css/custom.css">
<link rel="stylesheet" type="text/css" href="css/menu.css">
<link rel="stylesheet" type="text/css" href="css/search.css">
<link rel="stylesheet" type="text/css" href="css/daterangepicker.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/css_roomtypes_16v2.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/css_datepicker_16v2.css">
<link rel="stylesheet" type="text/css" href="%STATIC_WEBROOMSCDN_URL%websites/common/css/font-awesome/css/font-awesome.min.css">
<link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.7.2/css/all.css">

<!-- Bootstrap -->
<!--<link rel="stylesheet" type="text/css" href="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css">-->
<script src="js/bootstrap.bundle.js"></script>

<!-- Fonts -->
<link href="https://fonts.googleapis.com/css?family=Montserrat:400,700" rel="stylesheet" type="text/css">
<link href="https://fonts.googleapis.com/css?family=Lato:400,700,400italic,700italic" rel="stylesheet" type="text/css">
<link href="https://fonts.googleapis.com/css?family=Rubik:400,500" rel="stylesheet">
<script src="%STATIC_WEBROOMSCDN_URL%js/markerClusterer.js"></script>

<style>
	%SITE_CUSTOM_CSS%
	%PAGE_CUSTOM_CSS%
</style>

%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%


%SITE_CUSTOM_CONTENT_1%

</head>
<body class="bodyStyle">

<!-- Navigation -->
    <nav class="navbar navbar-expand-lg navbar-light fixed-top" id="mainNav">
      <div class="container-fluid">
      <div class="row w-100 m-auto">
        <h4 class="my-2 d-block d-lg-none text-primary">NZR Welfare</h4>
        <button class="ml-auto navbar-toggler navbar-toggler-right btn-primary" type="button" data-toggle="collapse" data-target="#navbarResponsive" aria-controls="navbarResponsive" aria-expanded="false" aria-label="Toggle navigation">
          Menu
          <i class="fa fa-bars"></i>
        </button>
        <div class="new-logo col-md-12">
           
	            <a class="nav-item d-none d-lg-block" href="%SITE_CUSTOM_CONTENT_3%home/">
	              <img class="logo" src="images/logo.png" alt="The New Zealand Railways Staff Welfare Trust">
	            </a>
            
        </div>
        <div class="collapse navbar-collapse" id="navbarResponsive">
        <!--- desktop navbar -->
          <ul class="navbar-nav m-auto">
            <li class="nav-item d-none d-lg-block"><a class="nav-link" href="%SITE_CUSTOM_CONTENT_3%home/">Home</a></li>
            <li class="nav-item d-none d-lg-block single-navbar">
              <a class="nav-link" href="%SITE_CUSTOM_CONTENT_3%holidays/">Holidays</a>
              <ul class="submenu px-lg-5">
	              <li class="sub-menu"><a href="%SITE_CUSTOM_CONTENT_3%holidays/accommodation/">Accommodation</a></li>
		            <li class="sub-menu"><a href="%SITE_CUSTOM_CONTENT_3%holidays/location/">Location</a></li>
		            <li class="sub-menu"><a href="https://nzrwelfare.web-rooms.com/dashboard.asp">Book Now</a></li>
		            <li class="sub-menu"><a href="%SITE_CUSTOM_CONTENT_3%holidays/accommodation-in-australia/">Holidays in Australia</a></li>
              </ul>             
            </li>
            
            <li class="nav-item d-none d-lg-block single-navbar">
              <a class="nav-link" href="%SITE_CUSTOM_CONTENT_3%forms-and-documentation/">Forms</a>
              <ul class="submenu px-lg-5">         
                <li class="sub-menu"><a href="%SITE_CUSTOM_CONTENT_3%assets/Forms/49a08a389e/NZ-Rail-Welfare-Application-for-Benefits-Form.pdf" target="_blank">Medical Benefits Claim</a></li>             
		            <li class="sub-menu"><a href="%SITE_CUSTOM_CONTENT_3%forms-and-documentation/ballot-application/">Ballot Application</a></li>
		            <!--<li class="sub-menu"><a href="%SITE_CUSTOM_CONTENT_3%forms-and-documentation/outside-of-ballot-period/">Outside of Ballot Period</a></li>-->
		            <li class="sub-menu"><a href="%SITE_CUSTOM_CONTENT_3%forms-and-documentation/extended-health-plan-and-group-life-plan/">Extended Health Plan and Group Life Plan</a></li>		                                
	            </ul>
            </li>
            
            <li class="nav-item d-none d-lg-block single-navbar">           
              <a class="nav-link" href="/health/">Health</a>
              <ul class="submenu px-lg-5">                          
                <li class="sub-menu"><a href="%SITE_CUSTOM_CONTENT_3%health/">General Medical Benefits</a></li>
		            <li class="sub-menu"><a href="%SITE_CUSTOM_CONTENT_3%health/group-life-plan/">Group Life Plan</a></li>
		            <li class="sub-menu"><a href="%SITE_CUSTOM_CONTENT_3%health/extended-health-plan-gallagher-bassett/">NIB</a></li>
		            <li class="sub-menu"><a href="%SITE_CUSTOM_CONTENT_3%health/extended-health-plan-southern-cross/">Southern Cross</a></li>		                                   
	            </ul>
            </li>
            
            <li class="nav-item d-none d-lg-block">
            <a class="nav-link" href="%SITE_CUSTOM_CONTENT_3%join-membership/">Join</a>
             <ul class="submenu px-lg-5">
	            <li class="sub-menu"><a href="%SITE_CUSTOM_CONTENT_3%join-membership/membership-form/"> Membership Application Form</a></li>         
	           </ul>
            </li>
                        
            <li class="nav-item d-none d-lg-block"><a class="nav-link" href="%SITE_CUSTOM_CONTENT_3%news/">News</a></li>          
            <li class="nav-item d-none d-lg-block"><a class="nav-link" href="%SITE_CUSTOM_CONTENT_3%contact-us/">Contact</a></li>           
            <li class="nav-item d-none d-lg-block"><a class="nav-link" href="https://nzrwelfare.web-rooms.com/dashboard.asp">Dashboard</a></li>
            <li class="nav-item d-none d-lg-block"><a class="nav-link" href="%SITE_CUSTOM_CONTENT_3%member-discounts/" title="Member Discounts">Discounts</a></li>
            
          </ul>
          
          <!-- mobile navbar -->
	          <ul class="list-menu pl-0 d-block d-lg-none m-auto">	            
						    <li class="current py-2"><a class="menu-list" href="%SITE_CUSTOM_CONTENT_3%" title="Home"><i class="fa fa-caret-right"></i> Home</a></li>
						    
						    <li class="link py-2"><a class="menu-list" href="%SITE_CUSTOM_CONTENT_3%holidays/" title="Holidays"><i class="fa fa-caret-right"></i> Holidays</a>	
						          <i class="float-right d-block d-md-none text-primary fa fa-angle-down"></i>				     
	                    <ul class="list-submenu">	                        
	                            <li class="sub-menu-list py-1"><a href="%SITE_CUSTOM_CONTENT_3%holidays/accommodation/"><i class="fa fa-caret-right"></i> Accommodation</a></li>	                        
	                            <li class="sub-menu-list py-1"><a href="%SITE_CUSTOM_CONTENT_3%holidays/location/"><i class="fa fa-caret-right"></i> Location</a></li>	                        
	                            <li class="sub-menu-list py-1"><a href="https://nzrwelfare.web-rooms.com/dashboard.asp"><i class="fa fa-caret-right"></i> Dashboard</a></li>	                        
	                            <li class="sub-menu-list py-1"><a href="%SITE_CUSTOM_CONTENT_3%holidays/accommodation-in-australia/"><i class="fa fa-caret-right"></i> Holidays in Australia</a></li>	                        
	                    </ul>
	               </li>	
	               
	               <li class="link py-2"><a class="menu-list" href="%SITE_CUSTOM_CONTENT_3%forms-and-documentation/" title="Forms and Documentation"><i class="fa fa-caret-right"></i> Forms</a>
						          <i class="float-right d-block d-md-none text-primary fa fa-angle-down"></i>						     
	                    <ul class="list-submenu">                        
	                            <li class="sub-menu-list py-1"><a href="%SITE_CUSTOM_CONTENT_3%forms-and-documentation/ballot-application/"><i class="fa fa-caret-right"></i> Ballot Application</a></li>	                        
	                            <li class="sub-menu-list py-1"><a href="%SITE_CUSTOM_CONTENT_3%forms-and-documentation/extended-health-plan-and-group-life-plan/"><i class="fa fa-caret-right"></i> Extended Health Plan and Group Life Plan</a></li>
	                    </ul>
	              </li>
	              
	              <li class="link py-2"><a class="menu-list" href="%SITE_CUSTOM_CONTENT_3%health/" title="Health"><i class="fa fa-caret-right"></i> Health</a>	
						          <i class="float-right d-block d-md-none text-primary fa fa-angle-down"></i>   
	                    <ul class="list-submenu">                      
	                            <li class="sub-menu-list py-1"><a href="%SITE_CUSTOM_CONTENT_3%health/group-life-plan/"><i class="fa fa-caret-right"></i> Group Life Plan</a></li>
	                            <li class="sub-menu-list py-1"><a href="%SITE_CUSTOM_CONTENT_3%health/extended-health-plan-gallagher-bassett/"><i class="fa fa-caret-right"></i> NIB</a></li>                    
	                            <li class="sub-menu-list py-1"><a href="%SITE_CUSTOM_CONTENT_3%health/extended-health-plan-southern-cross/"><i class="fa fa-caret-right"></i> Southern Cross</a></li>	                                                   
	                    </ul> 
	              </li> 
	              
	              <li class="link py-2"><a class="menu-list" href="%SITE_CUSTOM_CONTENT_3%join-membership/" title="Join Membership"><i class="fa fa-caret-right"></i> Join Membership</a>	
						          <i class="float-right d-block d-md-none text-primary fa fa-angle-down"></i>					     
	                    <ul class="list-submenu">	                        
	                      <li class="sub-menu-list py-1"><a href="%SITE_CUSTOM_CONTENT_3%join-membership/membership-form/"><i class="fa fa-caret-right"></i> Membership Application Form</a></li>	                                                 
	                    </ul>
	              </li>
						    
						    <li class="link py-2"><a class="menu-list" href="%SITE_CUSTOM_CONTENT_3%news/" title="News"><i class="fa fa-caret-right"></i> News</a></li>
						    <li class="link py-2"><a class="menu-list" href="%SITE_CUSTOM_CONTENT_3%contact-us/" title="contact us"><i class="fa fa-caret-right"></i> Contact</a></li>    
                <li class="link py-2"><a class="menu-list" href="https://nzrwelfare.web-rooms.com/dashboard.asp" title="Dashboard"><i class="fa fa-caret-right"></i> Dashboard</a></li>
                <li class="link py-2"><a class="menu-list" href="%SITE_CUSTOM_CONTENT_3%member-discounts/" title="Member Discounts"><i class="fa fa-caret-right"></i> Discounts</a></li>
	          </ul>          
          
          </div>
        </div>
      </div>
    </nav>


<!-- header -->
<section class="template-banner" style="background-image:url('images/slide-1.jpg');"></section>

	<section class="bg-dark subnav-section py-1">
	  <div class="container">
	    <div class="row py-4">
	     <h4 class="text-white text-center w-100 mb-0 text-uppercase">Welcome to %PROPERTY_SERVICE_NAME%</h4>
	    </div>
	  </div>
	</section>
