/* home */		
.pageCustom1 { padding-bottom:20px; }
.homeContainer { margin-top:20px; }
.homeArticles { background:#fff; box-shadow:0 1px 5px rgba(0,0,0,0.2); margin:25px 0; height:260px; width:100%; overflow:hidden; position:relative; }
.row .homeArticles ul { margin:0; }
.homeArticles .event-list-outer { height:260px; width:100%; position:relative; }
.homeArticles .event-details { width:50%; float:right; padding:3%; height:auto; margin-top:45px; }
.homeArticles h2.pageTitle { position:absolute; z-index:1000; right:30px; top:30px; width:480px; padding-bottom:3px; border-bottom:1px solid #eee; }
.homeArticles h2.pageTitle a { text-decoration:none; color:#000; font-size:20px; font-weight:300; }
.homeArticles .propPrev-events,
.homeArticles .propNext-events,
.homeArticles .propPrev-roomtypes,
.homeArticles .propNext-roomtypes { position:absolute; right:45px; z-index:1000; background:none; border:none; outline:none; }
.homeArticles .propNext-events,
.homeArticles .propNext-roomtypes { right:30px; }
.homeArticles .propPrev-events,
.homeArticles .propNext-events,
.homeArticles .propPrev-roomtypes,
.homeArticles .propNext-roomtypes { z-index:1000; font-size:100%; font-weight:400; opacity:1; top:33px; }
.homeArticles .propPrev-events:hover,
.homeArticles .propNext-events:hover,
.homeArticles .propPrev-roomtypes:hover,
.homeArticles .propNext-roomtypes:hover { cursor:pointer; opacity:0.8; }
.homeArticles .rwrRoomtype { padding:0; margin:0; border:none; }
.homeArticles .event-image { width:44%; height:260px; position:relative; float:left; background:#ddd; background-size:cover; }
.homeArticles li.event-inner { height:260px; width:100%; margin:0; }
.homeArticles .event-name a { text-decoration:none; }
.homeArticles .event-venue,
.homeArticles .event-daterange { font-style:italic; font-weight:300; color:#999; white-space:nowrap; overflow:hidden; text-overflow:ellipsis; }
.homeArticles .event-teaser { margin:5px 0 10px 0; max-height:65px; width:100%; overflow:hidden; }
.homeArticles .popup-desc { height:260px; width:100%; position:relative; max-width:none; }
.homeArticles .categoryDiv { height:260px; width:100%; overflow:hidden; }
.homeArticles .categoryDiv h2,
.homeArticles .desc-features-outer { display:none; }
.homeArticles .fromCap { display:none; }
.homeArticles .rwrRoomtype h2 { display:block; width:50%; float:right; padding:3%; padding-bottom:0; height:auto; white-space:nowrap; overflow:hidden; text-overflow:ellipsis; margin-top:45px; }
.homeArticles .fromCap { padding:0 3%; }
.homeArticles .desc-cap { font-style:italic; font-weight:300; color:#999; }
.homeArticles .desc-images { width:44%; height:260px; position:absolute; top:0; left:0; right:initial; }
.homeArticles .desc-images a { display:none; }
.homeArticles .desc-images a.first { display:block; height:auto; max-height:260px;  }
.homeArticles .rwrRoomtype { width:100%; }
.homeArticles .desc-images a.first img { min-width:100%; width:auto; max-width:0; min-height:260px; }
.homeArticles .desc-text-div { width:50%; float:right; padding:0 3%; max-height:65px; overflow:hidden; margin:5px 0 10px 0; }
.homeArticles .desc-text-div .desc-description-outer {  max-height:65px; overflow:hidden; margin:0; }
.homeArticles .desc-avail { width:50%; float:right; height:auto; margin:0; padding:0 3%; padding-top:0; }
.homeArticles .desc-avail h4,
.homeArticles .desc-avail-table,
.homeArticles .book-sub { display:none; }
.homeArticles .rwrRoomtype .book-roomtype { display:inline-block; }
.homeArticles .rwrRoomtype .book-title { font-weight:inherit; color:inherit; font-size:inherit; }
.homeArticles h2,
.homeArticles .event-name { font-size:16px; font-weight:400; }  
#propertyReviews .event-image { width:50px; height:50px; border-radius:25px; top:80px; left:40px; }
#propertyReviews .event-details { width:auto; float:none; padding:40px; margin-top:0; padding-top:90px; }
#propertyReviews h2.pageTitle { width:880px; top:40px; left:40px; }
#propertyReviews .propPrev-events,
#propertyReviews .propNext-events { top:43px; }
#propertyReviews .event-inner,
#propertyReviews .event-list-outer,
#propertyReviews { height:280px; }
#propertyReviews .event-name,
#propertyReviews .event-venue { margin-left:60px; }
.homeArticles .customContent { display:none; }

@media only screen and (max-width: 960px) 
{
.homeArticles { margin:1em 0; }		
.homeArticles .event-details,
.homeArticles .rwrRoomtype h2 { margin-top:0; }
#propertyReviews .event-details { padding:2em; }
#propertyReviews .event-inner, #propertyReviews .event-list-outer, #propertyReviews { height:auto; }
.slideControls, .propNext, .propPrev, .homeArticles h2.pageTitle { display:none; }
#propertyReviews .event-image { top:1.5em; left:2em; }	
}

@media only screen and (max-width: 640px) 
{
.slideControls, .propNext, .propPrev, .homeArticles h2.pageTitle { display:none; }
.homeArticles { margin-bottom:1em; height:auto; }
.homeArticles .slide0 { position:relative; overflow:hidden; }
.homeArticles,
.homeArticles li.event-inner,
.homeArticles .event-list-outer { height:auto; overflow:initial; }
.homeArticles .event-image { width:100%; height:180px; background-position:center center; float:none; }
.homeArticles .event-details { float:none; width:auto; padding:2em; }
.homeArticles .rwrRoomtype h2, 
.homeArticles .fromCap,
.homeArticles .event-name,
.homeArticles .event-venue, 
.homeArticles .event-daterange { text-align:center; }
.homeArticles .event-details a.event-link,
.homeArticles .rwrRoomtype .book-roomtype { margin:0 auto 0.5em auto; display:block; text-align:center; }
.homeArticles .desc-images { width:100%; height:180px; position:absolute; top:0; left:0; overflow:hidden; margin:0; }	
.homeArticles .desc-images a { display:none; }
.homeArticles .desc-images a.first { display:block; }
.homeArticles .desc-images img { min-width:100%; min-height:180px; }
.homeArticles .rwrRoomtype { width:auto; padding:2em; }
.homeArticles .rwrRoomtype h2 { width:100%; float:none; padding:0; display:block; padding-top:180px; font-weight:700; }
.homeArticles .fromCap { width:auto; float:none; padding:0; }
.homeArticles .popup-desc { height:auto; width:auto; position:static; }
.homeArticles .desc-text-div { height:auto; width:auto; float:none; max-height:none; padding:0; overflow:auto; }
.homeArticles .desc-text-div,
.homeArticles .event-teaser { margin:1em 0; }
.homeArticles .desc-avail { width:100%; float:none; padding:0; }
.homeArticles .desc-description-outer { max-height:65px; overflow:hidden; }
#propertyReviews .event-image { position:static; margin:1em auto -2em auto; }
#propertyReviews .event-name, #propertyReviews .event-venue { margin:auto; }
}