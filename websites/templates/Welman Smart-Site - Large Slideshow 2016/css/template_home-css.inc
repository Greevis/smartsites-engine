/* slideshow */
#slideshow { background:#eee; height:475px; width:100%; margin:0; position:relative; }
#slideshow .slideshowGallery ul { height:475px; overflow:hidden; width:100%; margin:0; }
#slideshow .slideshowGallery li { background:none; border:none; box-shadow:none; display:block; height:475px; margin:0; overflow:hidden; text-align:center; vertical-align:middle; width:100%; }
#slideshow .slideshowGallery .gallery-caption { display:none; }
#slideshow .slideshowGallery li .gallery-image { background-position:center bottom; background-repeat:no-repeat; background-size:cover; height:475px; width:100%; }
#slideshow .slideshowGallery .propPrev, 
#slideshow .slideshowGallery .propNext { background:none; border:none; color:#fff; opacity:0.5; font-family:'Open Sans', sans-serif; font-size:50px; font-weight:200; line-height:100%; padding:0; outline:none;
	position:absolute; top:210px; outline:none; z-index:999; bottom:initial; left:initial; }
#slideshow .slideshowGallery .propPrev { left:20px; }
#slideshow .slideshowGallery .propNext { right:20px; }
#slideshow .slideshowGallery .propPrev:hover, 
#slideshow .slideshowGallery .propNext:hover { cursor:pointer; opacity:1; }
#slideshow .row { position:relative; z-index:999; }

/* book online */
.bookBox { margin-top:-310px; }
.bookBox h3 { color:#fff; text-align:center; font-size:42px; font-weight:200; text-shadow:0 1px 1px rgba(0,0,0,0.2); }
.bookingBox { padding:0; margin:0; text-align:center; position:absolute; top:350px; left:0; right:0; z-index:999; }
.bookText { display:inline-block; color:#75dcfc; vertical-align: middle; font-size:24px; margin-right:10px; font-weight:300; }
.webrooms-datepicker { position:relative; display:inline-block; vertical-align: middle; }
.datepicker-label:before { left:12px; }
.bookingBox .datepicker-label,
.bookingBox .datepicker-input,
.bookingBox .datepicker-button,
.bookingBox .datepicker-label:before { line-height:55px; height:55px; font-size:16px; }
.bookingBox .datepicker-label { width:320px; line-height:57px; text-indent:35px; }
.bookingBox .datepicker-input { width:190px; left:110px; }
.bookingBox .datepicker-button { font-family:'Open Sans', sans-serif; color:#fff; display:inline-block; border-radius:0; cursor:pointer;
		text-transform:uppercase; font-size:18px; font-weight:800; padding:0 30px; position:relative; margin-left:10px; height:57px; }
.datepicker-button:hover { opacity:1; }
#ui-datepicker-div { z-index:9999 !important; font-size:100%; }

/* scrollt o fixed */
.scroll-to-fixed-fixed .bookingBox { position:static; margin-top:20px; }
.scroll-to-fixed-fixed .bookingBox .datepicker-label,
.scroll-to-fixed-fixed .bookingBox .datepicker-input,
.scroll-to-fixed-fixed .bookingBox .datepicker-button,
.scroll-to-fixed-fixed .bookingBox .datepicker-label:before { line-height:30px; height:30px; font-size:inherit; }
.scroll-to-fixed-fixed .bookingBox .datepicker-label { width:260px; line-height:30px; text-indent:30px; }
.scroll-to-fixed-fixed .bookingBox .datepicker-input { width:150px; left:95px; }
.scroll-to-fixed-fixed .bookingBox .datepicker-button { height:32px; line-height:32px; padding:0 20px; font-size:inherit; }

@media only screen and (max-width: 960px) 
{
#topBar { display:block; height:auto; line-height:100%; padding:1em; }	
#topBar .social { display:none; }
#topBar .contactInfo { float:none; display:block; }
#topBar .topName { float:none; }
#topBar .icoMap, #topBar .icoPhone { display:block; white-space:nowrap; overflow:hidden; text-overflow:ellipsis; margin:0; }
#headerBlock { height:auto; position:static !important; }
#headerBlock .headerNavbar { position:relative; }
#headerBlock .bookingBox { display:block; margin:0 0 1em 0; position:static; }
.webrooms-datepicker { displaY:block; width:90%; margin:auto; }
.bookingBox .datepicker-label, .bookingBox .datepicker-input, .bookingBox .datepicker-button, .bookingBox .datepicker-label:before { line-height:30px; height:30px; font-size:inherit; width:auto; display:block; margin:0; position:static; }
.bookingBox .datepicker-label { display:none; }
.bookingBox .datepicker-input { width:100%; background:#eee; text-indent:10px; }
.bookingBox .datepicker-button { padding:0; width:100%; }
#headerBlock .logoLeft { display:block; float:none; text-align:center; }
#headerBlock .propertyLogo { display:inline-block; }
.bookBox { margin-top:-220px; }
.bookBox h3 { font-size:30px; padding:1em; }
#slideshow,
#slideshow .slideshowGallery ul,
#slideshow .slideshowGallery li,
#slideshow .slideshowGallery li .gallery-image { height:300px; }

}

@media only screen and (max-width: 640px) 
{

}