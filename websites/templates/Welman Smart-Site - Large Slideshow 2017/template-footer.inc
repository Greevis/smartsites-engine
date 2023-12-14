<footer id="footerBlock">
	<div class="row">	
		<div id="footerContent">
			
			<div class="headerLogo">
				<a href="/" title="%PROPERTY_NAME%">
					<div class="propertyLogo"></div> <!-- area to add your custom logo via css -->
				</a>
			</div>
			
		<div class="contactOuter footerContact">
			<h2 class="font">%PROPERTY_NAME%</h2>
		  <div class="contactDiv">
				<span class="fa-stack fa-lg">
				  <i class="fa fa-circle fa-stack-2x"></i>
				  <i class="fa fa-map-marker fa-stack-1x fa-inverse"></i>
				</span>
					<div class="propertyAddress">%PROPERTY_STREETADDRESS%, </div>
					<div class="propertySuburb">%PROPERTY_SUBURB%, </div>
					<div class="propertyCity">%PROPERTY_CITY%, </div>
					<div class="propertyRegion">%PROPERTY_REGION%, </div>
					<div class="propertyCountry">%PROPERTY_COUNTRY%</div>
		  </div>
		  <div class="contactDiv">
				<span class="fa-stack fa-lg">
				  <i class="fa fa-circle fa-stack-2x"></i>
				  <i class="fa fa-mobile fa-stack-1x fa-inverse"></i>
				</span>
					<div class="propertyFreephone">%PROPERTY_FREEPHONE_LABEL%</div>
					<div class="dash">-</div> 
					<div class="contactPhone">%PROPERTY_TOLLPHONE_LABEL%</div>
	    </div>
		  <div class="contactDiv">
				<span class="fa-stack fa-lg">
				  <i class="fa fa-circle fa-stack-2x"></i>
				  <i class="fa fa-envelope-o fa-stack-1x fa-inverse"></i>
				</span>
	    		<div class="propertyEmail">Email <a href="mailto:%RESERVATIONS_EMAIL%">%RESERVATIONS_EMAIL%</a></div>
	    </div>
		</div>
				
				<div class="footerBadges">
					%SITE_CUSTOM_CONTENT_2%
				</div>
				
		</div>
		<div id="footerCopy">
			<div class="social">%FACEBOOK_PAGELINK% %TRIPADVISOR_PAGELINK% %TWITTER_PAGELINK% %GOOGLEPLUS_PAGELINK%</div>
			<div class="copyright">
				&copy; %YEAR% %PROPERTY_NAME% - 
				<a href="/sitemap.html" title="Website Site Map">Sitemap</a> -					
				<a href="https://secure.web-rooms.co.nz/Login.asp" title="Admin Login">Admin Login</a> - 
				%CREDITLINK%
			</div>
		</div>
	</div>
</footer>

<!-- js -->	
<script src="https://code.jquery.com/ui/1.11.4/jquery-ui.min.js"></script>
<script src="%GLOBAL_ROOT%js/jquery.cycle2.min.js"></script>
<script src="js/responsive-nav.js"></script>
<script src="js/lightbox.min.js"></script>
<script src="js/jquery.dotdotdot.min.js"></script>

<!-- css -->	
<link href="css/lightbox.css" rel="stylesheet" />
<link rel="stylesheet" href="https://code.jquery.com/ui/1.11.4/themes/smoothness/jquery-ui.css">

<!-- script - mobile nav / scroll-to-fixed -->
<script type="text/javascript">
var nav = responsiveNav(".nav-collapse");	
var scrollToFixed = $('.headerNavbar').offset().top;
$(window).on( 'scroll', function(){
        if ($(window).scrollTop() >= scrollToFixed) {
            $('.headerNavbar').addClass('scroll-to-fixed');
        } else {
        		$('.headerNavbar').removeClass('scroll-to-fixed');
        }
    });
</script>

<!-- scripts -->
<script type="text/javascript">
		$(document).ready(function() {
			$(".ellipsis").dotdotdot({
				ellipsis	: '... ',
			});
		});
		$(document).ready(function() {
			$('.slide0').cycle ({
				fx: 'fade', 
				timeout: 4000,
				slides: '> div',
				next: '.propNext-roomtypes',
				prev: '.propPrev-roomtypes'
			});
		});
		$(document).ready( function() {
	    $('.descBlock .gallery').cycle({
				fx: 'fade',
				speed: 1100,
				timeout: 5000,
				slides: 'li'
			});
		});
</script>