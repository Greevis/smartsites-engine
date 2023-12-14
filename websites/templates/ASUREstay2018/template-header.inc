
<script src="js/jquery.cycle2.min.js"></script>
<script src="js/jquery.cycle2.carousel.min.js"></script>
<script src="js/jquery.cycle2.swipe.min.js"></script>		
<script src="js/jquery.dotdotdot.min.js"></script>
<script src="js/lightbox.min.js"></script>		
<link href="css/lightbox.css" rel="stylesheet" />		

<script src="js/moment.js" type="text/javascript"></script>
<script src="js/jquery.daterangepicker.js" type="text/javascript"></script>
		
<script src="js/js.js"></script>
<script src="js/groupSearch.js"></script>
<script src="%STATIC_WEBROOMSCDN_URL%js/groupSearch_core.js"></script>
<script src="%STATIC_WEBROOMSCDN_URL%js/jquery.cookie.js"></script>

<script src="https://maps.googleapis.com/maps/api/js?key=AIzaSyBkSeSSBYyppgXf_h-HF63jMsSMt9JI9q8&libraries=places,geometry"></script>		
<link href="https://fonts.googleapis.com/css?family=Open+Sans:300italic,400italic,300,400,600,700,800" rel="stylesheet" type="text/css"/>
<link href='https://fonts.googleapis.com/css?family=Yellowtail' rel='stylesheet' type='text/css'>
<script src="%STATIC_WEBROOMSCDN_URL%js/markerClusterer.js"></script>

<link rel="stylesheet" href="css/search.css" type="text/css"/>
<link rel="stylesheet" href="css/daterangepicker.css" type="text/css"/>
<link rel="stylesheet" href="css/forms.css" type="text/css"/>
<link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.3.1/css/all.css">
<link rel="icon" type="image/ico" href="images/favicon.ico" />

<!-- Bootstrap -->
<link href="css/custom.css" rel="stylesheet">
<link href="css/bootstrap.min.css" rel="stylesheet">
<script src="js/bootstrap.bundle.min.js"></script>
<script src="js/scrollreveal.js"></script>
<script src="js/creative.js"></script>

<style>
%SITE_CUSTOM_CSS%
%PAGE_CUSTOM_CSS%
</style>
<script>

$(document).ready(function() {
	$(".ASURE .result-outer .result-description").dotdotdot({
		ellipsis	: '... ',
	});
});
/* Set the width of the side navigation */
function openNav() {
    document.getElementById("ASUREsidenav").style.width = "300px";
}
function closeNav() {
    document.getElementById("ASUREsidenav").style.width = "0";
}
</script>
%GOOGLE_ANALYTICS_TRACKER_UNIVERSAL%


<!-- Facebook Pixel Code -->
<script>
!function(f,b,e,v,n,t,s)
{if(f.fbq)return;n=f.fbq=function(){n.callMethod?
n.callMethod.apply(n,arguments):n.queue.push(arguments)};
if(!f._fbq)f._fbq=n;n.push=n;n.loaded=!0;n.version='2.0';
n.queue=[];t=b.createElement(e);t.async=!0;
t.src=v;s=b.getElementsByTagName(e)[0];
s.parentNode.insertBefore(t,s)}(window,document,'script','https://connect.facebook.net/en_US/fbevents.js');
fbq('init', '154244996604307'); 
fbq('track', 'PageView');
</script>
<noscript>
 <img height="1" width="1" src="https://www.facebook.com/tr?id=154244996604307&ev=PageView&noscript=1"/>
</noscript>
<!-- End Facebook Pixel Code -->

</head>
<body class="bodyStyle">
<!-- Navigation -->
    <nav class="navbar navbar-expand-lg navbar-light fixed-top" id="mainNav">
      <div class="container-fluid">
        <a class="navbar-brand js-scroll-trigger" href="/#page-top">
          <img class="logo logo-small" src="images/logo_asure.png" alt="Home" />
        </a>
        <button class="navbar-toggler navbar-toggler-right text-white" type="button" data-toggle="collapse" data-target="#navbarResponsive" aria-controls="navbarResponsive" aria-expanded="false" aria-label="Toggle navigation">
          Menu <i class="fa fa-bars"></i>
        </button>
        <div class="collapse navbar-collapse" id="navbarResponsive">
          <ul class="navbar-nav ml-auto">        
					    <li class="current"><a class="menu-list" href="%SITE_CUSTOM_CONTENT_1%" title="Home">Home					    
					    </a>			    
					    <li class="link"><a class="menu-list" href="%SITE_CUSTOM_CONTENT_1%about-us/" title="About Us">About Us						    						    						    
					    </a>
					          <i class="fa fa-chevron-down float-right"></i>  
                    <ul class="submenu">                        		            
                            <li class=" sub-menu-list"><a href="%SITE_CUSTOM_CONTENT_1%about-us/promotions/">Promotions</a></li>
                            <li class=" sub-menu-list"><a href="%SITE_CUSTOM_CONTENT_1%about-us/asure-card/">ASURECARD</a></li>                
                            <li class=" sub-menu-list"><a href="%SITE_CUSTOM_CONTENT_1%about-us/vouchers/">Vouchers</a></li>                       
                            <li class=" sub-menu-list"><a href="%SITE_CUSTOM_CONTENT_1%about-us/mobile-app/">Mobile App</a></li>                      
                            <li class=" sub-menu-list"><a href="%SITE_CUSTOM_CONTENT_1%about-us/faq/">FAQ</a></li>                       
                    </ul>
					    <li class="link"><a class="menu-list" href="search.html" title="Search">Search						    
					    </a>		    
					    <li class="link"><a class="menu-list" href="%SITE_CUSTOM_CONTENT_1%discover-new-zealand/" title="Discover New Zealand">Discover New Zealand						    					    
					    </a>	
					     <i class="fa fa-chevron-down float-right"></i>	     
                    <ul class="submenu">                                           
                            <li class=" sub-menu-list"><a href="%SITE_CUSTOM_CONTENT_1%discover-new-zealand/cycle-trails/">Cycle Trails</a></li>                        
                            <li class=" sub-menu-list"><a href="%SITE_CUSTOM_CONTENT_1%discover-new-zealand/short-walks/">Short Walks</a></li>
                            <li class=" sub-menu-list"><a href="%SITE_CUSTOM_CONTENT_1%discover-new-zealand/great-walks/">Great Walks</a></li>
                            <li class=" sub-menu-list"><a href="%SITE_CUSTOM_CONTENT_1%discover-new-zealand/golf-courses/">Golf Courses</a></li>
                            <!--<li class=" sub-menu-list"><a href="%SITE_CUSTOM_CONTENT_1%discover-new-zealand/hobbiton/">Hobbiton</a></li>-->
                    </ul>   
              <li class="current"><a class="menu-list" href="%SITE_CUSTOM_CONTENT_1%asure-membership/" title="ASURE Membership">ASURE Membership </a>
					    <li class="link"><a class="menu-list" href="%SITE_CUSTOM_CONTENT_1%contact-us/" title="Contact ASURE Accommodation Group New Zealand">Contact Us		    
					    </a>				    
          </ul>
          <a class="btn text-white guest-login mx-3 py-2 px-3 text-uppercase" href="https://asure.web-rooms.com">Guest Login</a>
        </div>
      </div>
    </nav>  
    