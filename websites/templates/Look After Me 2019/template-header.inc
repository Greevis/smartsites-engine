<script src="js/jquery.cycle2.min.js"></script>
<script src="js/jquery.cycle2.carousel.min.js"></script>
<script src="js/jquery.cycle2.swipe.min.js"></script>		
<script src="js/jquery.dotdotdot.min.js"></script>
<script src="js/lightbox.min.js"></script>		
<link href="css/lightbox.css" rel="stylesheet" />		

<script src="js/moment.js"></script>
<script src="js/jquery.daterangepicker.js"></script>
		
<script src="js/js.js"></script>
<script src="js/groupSearch.js"></script>
<script src="%STATIC_WEBROOMSCDN_URL%js/groupSearch_core.js"></script>
<script src="%STATIC_WEBROOMSCDN_URL%js/jquery.cookie.js"></script>

<script src="https://maps.googleapis.com/maps/api/js?key=AIzaSyB9yaIoZlsvDLL66hCTO6BFA82tQMSeObc&libraries=places,geometry"></script>

<!--Google Fonts -->
<link href="https://fonts.googleapis.com/css?family=Zilla+Slab:400,500,600" rel="stylesheet">

<link rel="stylesheet" href="css/bootstrap.min.css" type="text/css"/>
<link rel="stylesheet" href="css/search.css" type="text/css"/>
<link rel="stylesheet" href="css/daterangepicker.css" type="text/css"/>
<link rel="stylesheet" href="css/forms.css" type="text/css"/>
<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css" type="text/css"/>
<link rel="stylesheet" href="css/custom.css" type="text/css"/>

<script src="js/bootstrap.bundle.js"></script>

<link rel="icon" type="image/ico" href="images/favicon.png" />

<style>
%SITE_CUSTOM_CSS%
%PAGE_CUSTOM_CSS%
</style>

<script>
$(document).ready(function() {
	$(".LAM .result-outer .result-description").dotdotdot({
		ellipsis	: '... ',
	});
});
</script>

%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%

</head>
<body class="bodyStyle">
<!-- Facebook Pixel Code -->

<script>
!function(f,b,e,v,n,t,s)
{if(f.fbq)return;n=f.fbq=function(){n.callMethod?
n.callMethod.apply(n,arguments):n.queue.push(arguments)};
if(!f._fbq)f._fbq=n;n.push=n;n.loaded=!0;n.version='2.0';
n.queue=[];t=b.createElement(e);t.async=!0;
t.src=v;s=b.getElementsByTagName(e)[0];
s.parentNode.insertBefore(t,s)}(window,document,'script',
'https://connect.facebook.net/en_US/fbevents.js');
 fbq('init', '347931522039090'); 
fbq('track', 'PageView');
</script>
<noscript>
 <img height="1" width="1" 
src="https://www.facebook.com/tr?id=347931522039090&ev=PageView
&noscript=1"/>
</noscript>
<!-- End Facebook Pixel Code -->

<!-- Navigation -->
    <nav class="navbar navbar-expand-lg bg-faded fixed-top text-uppercase" id="mainNav">
      <div class="container-fluid">

        <button class="navbar-toggler navbar-toggler-left text-uppercase text-primary rounded" type="button" data-toggle="collapse" data-target="#navbarResponsive" aria-controls="navbarResponsive" aria-expanded="false" aria-label="Toggle navigation">
          <i class="fa fa-bars"></i>
        </button>
        
        <a class="m-auto" href="%SITE_CUSTOM_CONTENT_1%home/"><img class="logo" src="%SITE_CUSTOM_CONTENT_1%assets/Footer-Badges/212be229da/LAM-Logo.png"></a>
        
        <a class="float-right text-primary d-block d-lg-none" href="https://staydunedin.web-rooms.com"><i class="fa fa-user"></i></a>
        
        <div class="collapse navbar-collapse" id="navbarResponsive">
 
          <ul class="navbar-nav">
	          
							<li class="link nav-item mx-0 mx-lg-2"><a class="menu-list nav-link text-primary" href="%SITE_CUSTOM_CONTENT_1%" title="Home">Home</a>
							<li class="link nav-item mx-0 mx-lg-2"><a class="menu-list nav-link text-primary" href="%SITE_CUSTOM_CONTENT_1%search/" title="Search">Search</a>
							<li class="link nav-item mx-0 mx-lg-2"><a class="menu-list nav-link text-primary" href="%SITE_CUSTOM_CONTENT_1%hosting/" title="Hosting">Hosting</a>
							<li class="link nav-item mx-0 mx-lg-2"><a class="menu-list nav-link text-primary" href="%SITE_CUSTOM_CONTENT_1%blog/" title="Blog">Blog</a>
							<li class="link nav-item mx-0 mx-lg-2"><a class="menu-list nav-link text-primary" href="%SITE_CUSTOM_CONTENT_1%press-room/" title="Press Room">Press Room</a>
							<li class="link nav-item mx-0 mx-lg-2"><a class="menu-list nav-link text-primary" href="%SITE_CUSTOM_CONTENT_1%contact/" title="Contact">Contact</a>	  
							<li class="link nav-item mx-0 mx-lg-2"><a class="menu-list nav-link text-primary" href="%SITE_CUSTOM_CONTENT_1%about/" title="About">About</a>
						  <li class="link nav-item mx-0 mx-lg-2 d-block d-lg-none"><a class="menu-list nav-link text-primary" data-toggle="modal" data-target="#HostLogin">Host Login</a></li>
							   
					  
          </ul>
          
          <a class="float-right ml-auto text-primary d-none d-lg-block" href="https://staydunedin.web-rooms.com"><i class="fa fa-user"></i> Guest log in</a>
          
          <!-- Button trigger modal -->
				  <a class="float-right text-primary d-none d-lg-block" data-toggle="modal" data-target="#HostLogin">
						<i class="fa fa-sign-in pr-lg-1 pr-0"></i> Host Login</a>
						  
        </div>
      </div>
    </nav>
    
    <!-- Modal -->
<div class="modal fade" id="HostLogin" tabindex="-1" role="dialog" aria-labelledby="ModalLabel" aria-hidden="true">
  <div class="modal-dialog" role="document">
    <div class="modal-content">
      <div class="modal-header">
        <h5 class="modal-title text-primary text-uppercase" id="ModalLabel">Host Log In</h5>
        <button type="button" class="close" data-dismiss="modal" aria-label="Close">
          <span aria-hidden="true">&times;</span>
        </button>
      </div>
      <div class="modal-body p-lg-4 p-3">
        
        <form action="https://secure.web-rooms.co.nz/proc/Login_proc.asp" method="post" enctype="application/x-www-form-urlencoded" id="webroomsLoginForm" target="_blank">
        
        <input type="hidden" name="thirdPartyGroupType" value="91">
        <input type="hidden" name="tpghash" value="1251b98d580244316d98c3506c4cdfdd">
        <input type="hidden" name="availabilitySearch" value="0">
        <label for="exampleInputEmail1">Email address</label>
        <input type="text" value="" name="username" required="required" aria-required="true" placeholder="Email address">
        <label for="exampleInputPassword1">Password</label>
        <input type="password" value="" name="password" required="required" aria-required="true" placeholder="Password">
        <input class="btn btn-primary" type="submit" name="submit" value="Log in">
        
        </form>
        
      </div>
      <div class="modal-footer">
        <button type="button" class="btn btn-secondary" data-dismiss="modal">Close</button>
      </div>
    </div>
  </div>
</div>