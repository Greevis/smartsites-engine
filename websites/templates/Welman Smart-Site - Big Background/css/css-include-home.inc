/* home */		
.homeContainer { margin:20px 0; }
#homeBoxes { margin-bottom:20px; }
#homeBoxes .four { height:330px; overflow:hidden; }
#homeBoxes .boxTitle { text-align:center; color:#fff; text-transform:uppercase; font-size:100%; font-weight:400; line-height:65px; height:65px; }
#homeBoxes h2.pageTitle { display:block; }
#homeBoxes h2.pageTitle a { text-decoration:none; display:block; position:absolute; bottom:0; left:0; right:0; width:90%;
		color:#fff; font-weight:600; font-size:90%; padding:7px 0; display:block; margin:auto; border-radius:8px; border:1px solid #000; cursor:pointer; text-align:center; text-decoration:none;
		box-shadow:inset 0px 1px 0px 0px #424242; background:#0e0e0e; background:linear-gradient(to bottom, #2c2c2c, #0e0e0e); }
#homeBoxes h2.pageTitle a:hover { background:#0e0e0e; }	
#homeBoxes .propPrev-roomtypes,
#homeBoxes .propNext-roomtypes,
#homeBoxes .propPrev-events,
#homeBoxes .propNext-events { display:block; position:absolute; top:135px; left:10px; background:none; border:none; font-family:'Source Sans Pro', 'sans-serif'; color:#fff; opacity:0.5; font-size:16px; z-index:999; }
#homeBoxes .propPrev-roomtypes:hover,
#homeBoxes .propNext-roomtypes:hover,
#homeBoxes .propPrev-events:hover,
#homeBoxes .propNext-events:hover { opacity:1; cursor:pointer; }
#homeBoxes .propNext-roomtypes,
#homeBoxes .propNext-events { left:auto; right:10px; }
#homeBoxes .boxLink { display:block; text-decoration:none; font-weight:600; padding:10px 20px 25px 20px; }
#homeBoxes .slide1,
#homeBoxes .slide2,
#homeBoxes .slide3 { height:305px; overflow:hidden; }

/** home articles **/
#homeBoxes .event-list-inner { margin:0; }
#homeBoxes .event-inner { width:100%; }
#homeBoxes .event-image { width:100%; height:170px; position:relative; background:#ddd; background-position:center center; background-size:cover; }
#homeBoxes .event-details { margin:0; }
#homeBoxes .event-name,
#homeBoxes .event-venue,
#homeBoxes .event-daterange,
#homeBoxes .event-link { white-space:nowrap; overflow:hidden; text-overflow:ellipsis; padding:0 20px; }
#homeBoxes .event-name { font-size:95%; font-weight:600; color:#000; margin-top:20px; }
#homeBoxes .event-name a { text-decoration:none; color:#000; }	
#homeBoxes .event-venue,
#homeBoxes .event-daterange { font-style:italic; font-weight:400; color:#999; font-size:90%; }
#homeBoxes .event-daterange,
#homeBoxes .event-link { display:none; }
#homeBoxes .event-teaser { max-height:65px; overflow:hidden; font-size:90%; padding:0 20px; }

/* home rtd */
#homeBoxes .slide0 { position:relative; }
#homeBoxes .desc-images { width:100%; height:170px; position:absolute; top:0; left:0; overflow:hidden; }	
#homeBoxes .desc-images a { display:none; }
#homeBoxes .desc-images a.first { display:block; }
#homeBoxes .desc-images img { min-width:100%; min-height:170px; }
#homeBoxes .rwrRoomtype h2,
#homeBoxes .desc-cap { margin:0; white-space:nowrap; overflow:hidden; text-overflow:ellipsis; margin:0 20px; }
#homeBoxes .rwrRoomtype h2 { display:block; padding-top:190px; font-size:95%; font-weight:600; color:#000; margin:0 20px; }
#homeBoxes .desc-cap { font-style:italic; font-weight:400; color:#999; font-size:90%; }
#homeBoxes .desc-text-div { margin:0; max-height:60px; overflow:hidden; font-size:90%; }
#homeBoxes .desc-features-outer,
#homeBoxes .desc-avail { display:none; }
#homeBoxes .desc-description-outer { max-height:65px; overflow:hidden; margin:0 20px; }

/* slideshow */
#pageMain { position:relative; }
#headerSlideshow { height:350px; background:url(../images/icon_loading.gif) no-repeat center center #000; }
#slideshow { position:absolute; margin:0; box-shadow:0 1px 5px rgba(0,0,0,0.1); top:0; left:0; width:920px; overflow:hidden; height:350px; }
#slideshow .slideshowGallery { background:#fff; height:350px; width:920px; margin:0; }
#slideshow .slideshowGallery ul { height:350px; overflow:hidden; width:920px; margin:0; }
#slideshow .slideshowGallery li { background:none; border:none; box-shadow:none; display:block; height:350px; margin:0; overflow:hidden; text-align:center; vertical-align:middle; width:100%; }
#slideshow .slideshowGallery .gallery-caption { display:none; }
#slideshow .slideshowGallery li .gallery-image { background-position:center center; background-repeat:no-repeat; background-size:cover; height:350px; width:920px; }
#slideshow .propPrev, 
#slideshow .propNext { background:none; border:none; color:#fff; font-family:'Source Sans Pro', 'sans-serif'; font-size:50px; font-weight:200; line-height:100%; padding:0; position:absolute; top:170px; opacity:0.5; z-index:999; }
#slideshow .propPrev { left:20px; }
#slideshow .propNext { right:20px; }
#slideshow .propPrev:hover, 
#slideshow .propNext:hover { cursor:pointer; opacity:1; }

			/* home specials */
			#specialsStrip { margin-bottom:30px; display:none; position:relative; }
			#specialsStrip .deals-outer { background:#ffffc2; border:2px solid #fff380; height:90px; overflow:hidden; line-height:18px; width:auto; margin:auto; }
			#specialsStrip .deal-outer { height:90px; width:100%; overflow:hidden; }
			#specialsStrip .deal-image { float:left; margin-right:17px; background:url(https://secure.web-rooms.co.nz/templates/rwr/_master/deals-holder.jpg) center center no-repeat; background-size:cover; }
			#specialsStrip .deal-image img { height:90px; width:120px; }
			#specialsStrip .deal-name h3 { font-weight:800; width:780px; margin:0 0 2px 137px; white-space:nowrap; overflow:hidden; text-overflow:ellipsis; font-size:20px; text-transform:uppercase; padding-top:17px; }
			#specialsStrip .deal-teaser { color:#333; font-weight:400; width:780px; margin:0 0 0 137px; white-space:nowrap; overflow:hidden; text-overflow:ellipsis; }
			#specialsStrip .deal-button { color:#00a8eb; font-weight:700; max-width:780px; margin:0; white-space:nowrap; overflow:hidden; text-overflow:ellipsis; display:inline-block; }
			#specialsStrip .deals .deal-description-outer { display:none; }
			#specialsStrip .dealPrev,
			#specialsStrip .dealNext { display:block; position:absolute; top:60px; right:10px; background:none; border:none; font-family:'Source Sans Pro', 'sans-serif'; color:#666; opacity:0.5; font-size:16px; z-index:999; }
			#specialsStrip .dealPrev { right:25px; }
			#specialsStrip .dealPrev:hover,
			#specialsStrip .dealNext:hover { opacity:1; cursor:pointer; }
			#specialsStrip .deal-description-outer { display:none; }



			@media only screen and (max-width: 960px) 
				{				
					
					.homeContainer { margin:0; }

					#headerSlideshow { height:200px; }	
					#slideshow { margin:0; box-shadow:0 1px 5px rgba(0,0,0,0.5); height:200px; width:100%; }
					#slideshow .slideshowGallery,
					#slideshow .slideshowGallery ul,
					#slideshow .slideshowGallery li,
					#slideshow .slideshowGallery li .gallery-image { width:100%; height:200px; }
					#bookingBox,
					#slideshow .propPrev, 
					#slideshow .propNext { display:none; }
					
						#homeBoxes { margin-bottom:1em; }
						#homeBoxes .rwrRoomtype { width:100%; overflow:hidden; }
						#homeBoxes .four { margin:0; background:#eee; margin-bottom:1em; padding-bottom:3em; height:340px; }
						#homeBoxes .event-details,
						#homeBoxes .rwrRoomtype h2,
						#homeBoxes .desc-cap,
						#homeBoxes .desc-text-div,
						#homeBoxes .btn { width:90%; margin:0 auto; } 
						#homeBoxes .btn { margin-top:1em; position:static; } 
						#homeBoxes .event-details { margin-top:20px; }
						#homeBoxes .desc-description-outer,
	#homeBoxes .event-name, 
	#homeBoxes .event-venue, 
	#homeBoxes .event-daterange, 
	#homeBoxes .event-teaser,
	#homeBoxes .event-link { margin:0; padding:0; }
						#homeBoxes .desc-cap,
						#homeBoxes .desc-text-div,
						#homeBoxes .event-teaser,
						#homeBoxes .event-name,
						#homeBoxes .event-venue, 
						#homeBoxes .event-daterange { font-size:100%; }
						#homeBoxes h2.pageTitle a { bottom:1.5em; }
						
						#headerBlock .propertyInfo { display:block; margin:0; padding:1.5em; padding-top:0.5em; }
						#headerBlock .propertyInfo h3.font { font-size:110%; line-height:110%; }
						#headerBlock .icoLocation, #headerBlock .icoPhone { font-size:85%; }
					
								/* deals */
						#specialsStrip { margin:0 1em 1em 1em; width:auto; }		
						#specialsStrip .deals-outer { height:auto; overflow:auto; text-align:center; padding:1.5em; }
						#specialsStrip .deal-outer { height:auto; width:100%; overflow:visible; }
						#specialsStrip .deal-image { float:none; margin:0 auto; background:none; }
						#specialsStrip .deal-image img { margin:1.5em auto 0.5em 0; }
						#specialsStrip .deal-name h3 { width:auto; margin:0; white-space:normal; padding:0; }
						#specialsStrip .deal-teaser { width:auto; margin:0; white-space:normal; overflow:visible;  }
						#specialsStrip .deal-button { width:auto; margin:0; white-space:normal; overflow:visible; display:block; }
						#specialsStrip .dealNext,
						#specialsStrip .dealPrev { top:10px; }
						
						.headerLogo { width:100%; margin-top:1.5em; height:auto; display:block; }
					.headerLogo a { display:block; width:90%; margin:auto; }
					.propertyIcons { display:block; float:none; margin:0; }
						
				}