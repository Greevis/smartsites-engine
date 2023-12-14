
/* hide */
.homeArticles h2.pageTitle,
.homeArticles .fromCap,
.homeArticles .desc-text-div,
.homeArticles .desc-avail h4,
.homeArticles .desc-avail-table,
.homeArticles .event-venue,
.homeArticles .event-daterange,
.homeArticles .event-teaser { display:none; }

/* common */		
.homeArticles { background:#fff; box-shadow:0 1px 5px rgba(0,0,0,0.2); margin:25px 0; height:260px; width:100%; overflow:hidden; position:relative; }
.homeContainer .homeArticles ul.event-list-inner,
.homeContainer .homeArticles li.event-inner { margin:0; width:100%; height:260px; }
.slide0, 
.homeArticles .event-list-outer { width:44%; height:260px; overflow:hidden; display:inline-block; position:relative; }

/* controls */
.propNext, .propPrev { position:absolute; left:365px; z-index:1000; background:none; border:none; outline:none; font-size:100%; font-weight:400; opacity:1; bottom:20px; opacity:0.5; color:#fff; }
.propNext { left:380px; }
.propNext:hover, .propPrev:hover { cursor:pointer; opacity:1; }

/* roomtypes */
.homeArticles .rwrRoomtype { height:260px; width:100%; padding:0; margin:0; border:none; }
.homeContainer .homeArticles .desc-images { height:260px; width:100%; position:absolute; top:0; left:0; right:initial; }
.homeArticles .desc-images a { display:none; }
.homeArticles .desc-images a.first { display:block; height:auto; max-height:260px;  }
.homeArticles .desc-images a.first img { width:100%; height:260px; object-fit:cover; }
.homeArticles .desc-images a:hover { opacity:1; cursor:default; }

/* articles */
.homeArticles .event-image { height:260px; width:100%; position:absolute; top:0; left:0; background-size:cover; background-position:center center; }

/* titles */
.homeArticles .rwrRoomtype h2,
.homeArticles .event-name { white-space:nowrap; overflow:hidden; text-overflow:ellipsis; z-index:999; max-width:none;
	position:absolute; bottom:0; left:0; background:rgba(0,0,0,0.6); font-size:14px; font-weight:400; width:100%; right:0;
	color:#fff; padding:20px 0; text-indent:40px; text-shadow:1px 1px 1px rgba(0,0,0,0.5); }
.homeContainer .homeArticles .event-name a { color:#fff; }

/* links */
.homeArticles .book-roomtype,
.homeArticles .event-link { height:14px; width:14px; border-radius:14px; position:absolute; bottom:22px; left:20px; overflow:hidden; text-indent:-999px; z-index:999; padding:0; border:none; }
.homeArticles .book-roomtype:before,
.homeArticles .event-link:before { content:'\25BA'; color:#fff; font-size:8px; top:0; left:0; position:absolute; text-indent:0; text-align:center; height:14px; width:14px; line-height:14px; }

/* custom content */
.homeArticles .customContent { width:56%; height:260px; display:block; float:right; }
.homeArticles .customContent .pad { padding:30px; }
.homeArticles .customContent p { max-height:115px; overflow:hidden; }
.homeArticles .customContent .btn { min-width:200px; }

/* reviews */
#propertyReviews,
#propertyReviews ul.event-list-inner,
#propertyReviews ul.event-list-inner li { height:150px; }
#propertyReviews { padding:30px; width:auto; }
#propertyReviews .event-list-outer { width:100%; height:auto; }
#propertyReviews .event-image { width:50px; height:50px; border-radius:25px; top:0; left:0; }
#propertyReviews .event-name, 
#propertyReviews .event-venue { margin-left:60px; }
#propertyReviews .event-name { white-space:nowrap; overflow:hidden; text-overflow:ellipsis; z-index:999; max-width:none;
	position:static; background:none; font-size:inherit; font-size:120%; font-weight:600; width:100%; margin-top:5px;
	color:inherit; padding:0; text-indent:0; text-shadow:none; }
#propertyReviews .event-name a { color:inherit; }
#propertyReviews .event-venue { display:block; color:#999; white-space:nowrap; overflow:hidden; text-overflow:ellipsis; }
#propertyReviews .event-teaser { display:block; margin:10px 0; max-height:40px; overflow:hidden; }
#propertyReviews .event-link { height:auto; width:auto; border-radius:0; position:static; text-indent:0; overflow:initial; display:inline-block;
	border-radius:2px; border-bottom:2px solid rgba(0,0,0,0.25); box-shadow:1px 1px 3px rgba(0,0,0,0.25); padding:0 16px; }
#propertyReviews .propNext, 
#propertyReviews .propPrev { right:0; color:#1c94c6; left:initial; }
#propertyReviews .propPrev { right:15px; }

@media only screen and (max-width: 960px) 
{
.homeArticles { margin:0; }
.propNext, .propPrev { display:none; }
.homeContainer .homeArticles .desc-images { margin:0; }
}

@media only screen and (max-width: 600px) 
{
.homeArticles { height:auto; margin-bottom:1.5em; }
.slide0, .homeArticles .event-list-outer { width:100%; display:block; }
.homeArticles .customContent { width:100%; height:auto; float:none; }
.homeArticles .customContent .pad { padding:1.5em }
#propertyReviews { padding:1.5em; }
#propertyReviews,
#propertyReviews ul.event-list-inner,
#propertyReviews ul.event-list-inner li { height:auto; }
#propertyReviews .event-teaser { max-height:none; }
}