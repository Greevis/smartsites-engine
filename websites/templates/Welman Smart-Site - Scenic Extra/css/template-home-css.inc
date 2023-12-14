
.homeContainer { margin:40px 0; }
.logoBox { z-index:10000; position:absolute; left:0; top:10px; }
.logoBox img { height:auto; }
.badgesBox { z-index:10000; position:absolute; right:0; top:45px; }

/* slideshow */
.headerBackground,
.headerBackground .row { height:460px; }
.headerSlideshow { height:460px; width:100%; margin:auto; position:absolute; top:40px; left:0; z-index:1; overflow:hidden; display:none; }
.headerSlideshow .slideshowGallery { height:460px; width:100%; margin:0; position:relative; }
.headerSlideshow .slideshowGallery ul { height:460px; width:100%; overflow:hidden; }
.headerSlideshow .slideshowGallery li { height:460px; width:100%; background:none; border:none; box-shadow:none; display:block; margin:0; overflow:hidden; text-align:center; vertical-align:middle; }
.headerSlideshow .slideshowGallery .gallery-caption { display:none; }
.headerSlideshow .slideshowGallery li .gallery-image { height:460px; width:100%; background-position:center center; background-repeat:no-repeat; background-size:cover; }
.headerSlideshow .propPrev, 
.headerSlideshow .propNext { background:none; border:none; color:#fff; font-family:'Advent Pro', sans-serif; font-size:50px; font-weight:200; line-height:100%; padding:0; position:absolute; top:190px; z-index:1000; opacity:0.4; }
.headerSlideshow .propPrev { left:20px; }
.headerSlideshow .propNext { right:20px; }
.headerSlideshow .propPrev:hover, 
.headerSlideshow .propNext:hover { cursor:pointer; opacity:1; }



			@media only screen and (max-width: 960px) 
				{

					#topBar,
					.logoBox,
					.badgesBox { display:block; }
.propertyTitle { display:none; }
#topBar { position:absolute; top:280px; background:none !important; height:auto; font-size:90%; padding: 1em; text-align:center;
	left:0; right:0; margin-left:auto; margin-right:auto; }
#topBar .propertyContact { float:none; line-height:inherit; margin:0; font-size:90%; text-shadow:1px 1px 1px rgba(0,0,0,0.3); }
					#topBar .icoLocation,
					#topBar .icoPhone { background:none; padding:0; margin:0; display:inline; }

			.badgesBox { bottom:2em; padding:0 1em; top:initial; left:0; right:0; margin-left:auto; margin-right:auto; }		
			.headerIcons { text-align:center; }
			.headerBackground, .headerBackground .row { height:400px; }
					.logoBox { top:60px; left:0; right:0; margin-left:auto; margin-right:auto; background:none; padding:0; margin:0; box-shadow:none; }
					.logoBox img { padding:1em 2em; background:#fff; box-shadow:0 1px 3px rgba(0,0,0,0.2); }
					.homeContainer { margin:0; }

					
				}
