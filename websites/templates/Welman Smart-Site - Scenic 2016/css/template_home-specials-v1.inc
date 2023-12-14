/* specials */
.slide2 { position:absolute; top:-310px; left:200px; padding:30px; width:560px; height:100px; background:rgba(0,0,0,0.75); color:#fff; overflow:visible; }
.slide2:before { content:''; bottom:30px; left:-30px; height:0; width:0; position:absolute; border-style:solid; border-width:0 30px 20px 0; border-color:transparent rgba(0,0,0,0.75) transparent transparent; }
.slide2 .customContent { display:none; }
.slide2 .event-list-outer { width:100%; }
.homeContainer .slide2 ul, 
.homeContainer .slide2 li,
.homeContainer .slide2 .event-list-outer,
.homeContainer .slide2 .event-image { height:160px !important; overflow:visible; }
.homeContainer .slide2 .event-image { width:200px; right:-30px; top:-30px; left:initial; background-position:center center; }
.homeContainer .slide2 .event-name,
.homeContainer .slide2 .event-teaser { display:block; width:330px; }
.homeContainer .slide2 .event-teaser { max-height:60px; overflow:hidden; margin:5px 0; font-size:13px; }
.homeContainer .slide2 .event-name { position:static; background:none; font-size:16px; font-weight:700; width:auto; color:inherit; padding:0; text-indent:0; text-shadow:none; line-height:100%; color:#F37E1E; }
.homeContainer .slide2 .event-name a { color:inherit; }
.homeContainer .slide2 .event-link { height:auto; width:auto; border-radius:0; position:static; overflow:initial; text-indent:0; padding:0 16px; border-bottom:2px solid rgba(0,0,0,0.25); 
	border:none; background:none; color:#00a6e9; padding:0; text-align:left; font-weight:600; line-height:100%; }
.homeContainer .slide2 .event-link:before { display:none; }
.homeContainer .slide2 .propNext { left:initial; right:-20px; bottom:50px; color:#00a6e9; } 
.homeContainer .slide2 .propPrev { left:initial; right:0; bottom:50px; color:#00a6e9; }

@media only screen and (max-width: 960px) 
{

/* specials */
.slide2 { position:relative; top:initial; left:initial; padding:0; height:auto; width:100%; background:#fff; color:inherit; box-shadow:0 1px 5px rgba(0,0,0,0.2); margin:0 0 1.5em; }
.slide2:before { display:none; }
.slide2 .event-list-outer { width:100%; }
.homeContainer .slide2 ul, 
.homeContainer .slide2 li,
.homeContainer .slide2 .event-list-outer,
.homeContainer .slide2 .event-image { height:auto; overflow:visible; }
.homeContainer .slide2 .event-image { height:260px; width:100%; position:static; }
.homeContainer .slide2 .event-name,
.homeContainer .slide2 .event-teaser { display:block; width:auto; padding:0 1.5em; }
.homeContainer .slide2 .event-teaser { margin:0.5em 0; max-height:115px; }
.homeContainer .slide2 .event-name { margin-top:1.5em; color:inherit; }
.homeContainer .slide2 .event-name a { color:inherit; }
.homeContainer .slide2 .event-link { border-radius:2px; padding:0 16px; border-bottom:2px solid rgba(0,0,0,0.25); color:#fff; line-height:30px; margin:0 0 1.5em 1.5em; min-width:200px; text-align:center; font-weight:400; }
.homeContainer .slide2 .event-link:before { display:none; }
.homeContainer .slide2 .propNext { right:-20px; bottom:50px; } 
.homeContainer .slide2 .propPrev {  right:0; bottom:50px; }
.slide2:before { display:block; content:'Specials'; width:100%; position:absolute; bottom:initial; top:201px; left:0; background:rgba(0,0,0,0.6); font-size:14px; font-weight:400; width:100%; right:0;
color:#fff; padding:0; text-indent:40px; text-shadow:1px 1px 1px rgba(0,0,0,0.5); border:none; z-index:999; height:59px; line-height:59px; }

}