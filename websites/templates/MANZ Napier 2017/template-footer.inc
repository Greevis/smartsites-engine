<footer class="footerCopy">
		&copy; %YEAR% Napier Motel Association - 
		<a href="/sitemap.html" title="Website Site Map">Sitemap</a> -					
		<a href="http://www.welman.co.nz/webrooms-login.asp" title="Admin Login">Admin Login</a> - 
		%CREDITLINK%
</footer>

<!-- RANDOM BACKGROUND IMAGE JQUERY -->
<div class="preload">
	<img src="images/background.jpg" alt="Napier Motels" />
	<img src="images/background1.jpg" alt="Napier Accommodation" />
	<img src="images/background2.jpg" alt="Accommodation Napier" />
</div>
<script type="text/javascript">
  var images = ['background.jpg', 'background1.jpg', 'background2.jpg'];
	$('.bodyStyle').css({'background-image': 'url(images/' + images[Math.floor(Math.random() * images.length)] + ')'});
</script>

<!-- js -->	
<script src="https://code.jquery.com/ui/1.11.4/jquery-ui.min.js"></script>
<script src="%GLOBAL_ROOT%js/jquery.cycle2.min.js"></script>
<script src="js/lightbox.min.js"></script>
<script src="js/jquery.dotdotdot.min.js"></script>

<!-- css -->	
<link href="css/lightbox.css" rel="stylesheet" />
<link rel="stylesheet" href="https://code.jquery.com/ui/1.11.4/themes/smoothness/jquery-ui.css">

<!-- scripts -->
<script type="text/javascript">
		$(document).ready(function() {
			$(".ellipsis").dotdotdot({
				ellipsis	: '... ',
			});
		});
</script>