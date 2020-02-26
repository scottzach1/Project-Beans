

<!doctype html>
<html lang="en">
<head>

    <meta charset="utf-8">
    <meta http-equiv="x-ua-compatible" content="ie=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">

    <title>Login | ECS | Victoria University of Wellington</title>
    <link rel="shortcut icon" href="/favicon.ico" type="image/x-icon" />

    <!-- toolkit styles -->
    <link rel="stylesheet" href="/vic-ui-kit/css/toolkit.css" id="currentStylesheet">
    <script type="text/javascript" src="/libs/jquery/2.2.4/jquery.min.js" crossorigin="anonymous"></script>
<link rel="stylesheet" href="/vic-ui-kit/css/foswiki.css">    <!-- /toolkit styles -->

<meta name="ROBOTS" content="NOINDEX, NOFOLLOW" />
<style type="text/css">
<!--/* <![CDATA[ */
    table.logintable {
      border: 1px solid black;
      margin: 5px;
      width: 200px;
      float: right;
      background: #FFFFFF;
    }
    table.logintable th, table.logintable td {
      padding: 5px;
      border: 0;
      background: #FFFFFF;
    }
    td.loginmessage {
      color: red;
    }


/* ]]> */-->
</style>

</head>
<body onload="document.f.username.focus()">
 
<div class="global" id="global-nav">
    <div class="menu-toggle horisontal-links">
        <a href="javascript:void(0);">
            <div class="logo-mini">&nbsp;</div>
        </a>
        <a href="javascript:void(0);" class="js-toggle-global-nav" role="button" aria-label="Toggle Navigation">
            <span class="tcon tcon-menu--xcross" aria-label="toggle menu" style="float:right;">
                  <span class="tcon-menu__lines" aria-hidden="true"></span>
            <span class="tcon-visuallyhidden">toggle menu</span>
            </span>
        </a>
    </div>
    <div class="menu">
        <nav>
            <div class="search">

                <form method="get" action="https://www.wgtn.ac.nz/search">
                    <div role="search">
                        <a href="javascript:void(0);" class="js-toggle-global-search hide-on-mobile">
                            <span class="tcon tcon-search--xcross " aria-label="toggle search">
                                          <span class="tcon-search__item" aria-hidden="true"></span>
                            <span class="tcon-visuallyhidden">toggle search</span>
                            </span>
                        </a>
                        <label class="input-wrapper -icon-search" id="global-search">
                            <input autocomplete="off" name="q" placeholder="Search for…" required="" type="text">
                            <input value="Go" type="submit">
                        </label>
                    </div>
                </form>
                <div class="horisontal-links align-center hide-on-desktop">
                    <a href="https://www.wgtn.ac.nz"><span class="icon-home"></span>Home</a>
                    <a href="https://www.wgtn.ac.nz/about/contacts"><span class="icon-phone"></span>Contact</a>
                </div>

            </div>

            <div id="menu">

                <a href="https://www.wgtn.ac.nz" class="home">
                    <span class="icon-home hanging-icon"></span>
                    <span class="hide-on-desktop">Victoria's main site</span>
                </a>
                <a href="https://www.wgtn.ac.nz/study">Future students</a>
                <a href="https://www.wgtn.ac.nz/international">International students</a>
                <a href="https://www.wgtn.ac.nz/students">Current students</a>
                <a href="https://www.wgtn.ac.nz/research">Research</a>
                <a href="https://www.wgtn.ac.nz/about">About Victoria</a>
<a href="https://ecs.wgtn.ac.nz/login?ReturnUrl=https:%2f%2fecs.wgtn.ac.nz%2flogin-ticket%3fReturnUrl%3dhttps%253A%252F%252Fecs.wgtn.ac.nz%252Ffoswiki%252Fbin%252Fviewfileauth%252FCourses%252FENGR301_2020T1%252FAssessments%252Farchitecture-design.md%3bmessage%3dlogin_required" title="Log in">Log In</a>

            </div>


        </nav>

                <!-- duplicates side nav -->
                            <nav class="site" role="navigation">

                        <a href="https://www.wgtn.ac.nz/ecs" class="back hide-on-desktop">

                            <span class="icon-back hanging-icon"></span>
                            <div class="">
                                <div>School of Engineering and Computer Science</div>
                                <div lang="mi">Te Kura Mātai Pūkaha, Pūrorohiko</div>
                            </div>
                        </a>
                        <!-- <p>Has Children</p> -->
			
                    </nav>
                      <!-- /duplicates side nav -->

    </div>

</div>



<header class="site-header">
    <div class="centraliser block">

    <!-- Logotype -->
        <div class="logo">

          <a href="https://www.wgtn.ac.nz" title="Victoria University of Wellington homepage">

            <picture>
              <source media="(max-width: 1087px)" srcset="/vic-ui-kit/images/logo-white-full.svg">
              <img src="/vic-ui-kit/images/logo-white-full.svg" alt="Victoria University of Wellington - Te Whare Wānanga o te Ūpoko o te Ika a Māui">
            </picture>
          </a>
        </div>

        <!-- Site name and header block -->
        <div class="site-intro">

            <a href="https://www.wgtn.ac.nz/ecs" title="School of Engineering and Computer Science homepage">

                <h1>
              <span class="preline">School of</span>
              
                                          <!-- sitename notlarge false -->
                    Engineering and Computer Science
                                      
                  <small lang="mi">Te Kura Mātai Pūkaha, Pūrorohiko</small>
            </h1>
            </a>
        </div>

    </div>
</header>


<section class="layout centraliser block">
        <!-- Menu -->
    
                    <div class="sidebar">
                        <nav class="site" role="navigation">
                            <!-- <p>Has Children</p> -->
			    
                        </nav>
                    </div>
                  


 <!-- Banner for Hompage -->
                                <!-- no banner  -->
        <div class="content-panel">
        
    <nav aria-label="breadcrumb" role="navigation">
        <ul class="breadcrumbs block">
	    <li><a href="/">School of Engineering and Computer Science</a></li>
            <li>
                Login
            </li>
        </ul>
    </nav>
     
             <!-- Banner for Hompage END-->

            <main>

                        <div class="block formatting">
                            
                
           <h1>Login</h1>

<h2>Welcome to the ECS/SMS websites</h2>

<form method="post" action="/login-ticket" enctype="multipart/form-data" name="f">

<table class="logintable">

<tr>
    <td colspan="2" class="loginmessage">Please enter your username and password to continue.</td>
</td>	

<tr>
<th>Username</th>
<td>
    <input type="text" name="username" tabindex="1"  size="16" />
    <input type="hidden" name="ReturnUrl" value="https://ecs.wgtn.ac.nz/foswiki/bin/viewfileauth/Courses/ENGR301_2020T1/Assessments/architecture-design.md"  />
    <input type="hidden" name="ServerUrl" value=""  />
</td>
</tr>

<tr>
<th>Password</th>
<td><input type="password" name="password" size="16" tabindex="2" /></td>
</tr>

<tr>
<th>Realm</th>
<td>
    <select name="realm" tabindex="3" >
<option selected="selected" value="ECS.VUW.AC.NZ">ecs.vuw.ac.nz</option>
<option value="STAFF.VUW.AC.NZ">staff.vuw.ac.nz</option>
<option value="STUDENT.VUW.AC.NZ">student.vuw.ac.nz</option>
</select>
</td>
</tr>

<tr>
<th>HTTPS only</th>
<td>
    <label><input type="checkbox" name="ssl_only" value="on" tabindex="4" /></label>*
</td>
</tr>
<tr>
<td style="text-align: center" colspan="2">
    <input type="submit" name="login" value="Log in" tabindex='5' />
    <br />
    <a href="/Support/TechNoteForgottenPassword">Forgot your password?</a>
    <br />
    <img src="/images/openid-16x16.gif" alt="OpenID logo" /><a href="/cgi-bin/openid_connect?ReturnUrl=https%3A%2F%2Fecs.wgtn.ac.nz%2Ffoswiki%2Fbin%2Fviewfileauth%2FCourses%2FENGR301_2020T1%2FAssessments%2Farchitecture-design.md;message=login_required">Log in using OpenID</a>
</td>
</tr>
</table>
<div> <input type="hidden" name=".cgifields" value="ssl_only"  /> </div> </form>

<p>
  By logging in to our website you will be able to access protected resources
  and some areas of the website will be personalised.
</p>

<p>
  The webserver requires you to authenticate because:
  <blockquote>
    <i>This page requires authentication</i>
  </blockquote>
</p>

<h3>Help</h3>

<p>
  There are several reasons that you may be unable to log in:
</p>

<h4>You haven't performed "Account Registration"</h4>
<p>
  Each year, students in the School need to follow our registration process
  so that they can use an ECS account. This is different from the SCS account
  that you may use elsewhere in the University.
</p>
<p>
  To register, please go to one of the computer labs in the School, or you can
  <a href="/register">register online</a>.
</p>

<h4>Selecting the wrong Realm</h4>
<p>
  If you are using an ECS account to log in then the "Realm" should be set to 
  <code>ecs.vuw.ac.nz</code>.
</p>
<p>
  If however you are using a VUW STAFF or STUDENT
  account (as used elsewhere in the University) "Realm" should be set to
  <code>staff.vuw.ac.nz</code> or <code>student.vuw.ac.nz</code> as appropriate.
</p>

<h4>Forgotten password</h4>
<p>
  If you have forgotten your password, please visit the 
  <a href="/Support/TechNoteForgottenPassword">"Forgot your password"</a> page
  to find out how to have it reset.
</p>
  
<h4>Cookie problems</h4>
<p>
  Our website follows industry best-practice and uses an encrypted session
  cookie to authenticate your requests to our server. This cookie is not 
  written to your hard disk. 
</p>
<p>
  If your browser blocks cookies, then your login may succeed but subsequent
  requests to our webserver may be denied. Please allow your browser to accept
  session cookies. If necessary you can add ecs.wgtn.ac.nz to the list of
  trusted sites in your browser options.
</p>

<h4>IP Address mismatch</h4>
<p>
  Our webserver checks your IP address when validating your login and 
  subsequent accesses. If your ISP or business runs a proxy server, you could
  potentially connect from two or more IP addresses in a given session. 
</p>
<p>
  To find out your connecting IP address, you can compare the address you
  connect via <a href="/cgi-bin/login/ip">HTTPS</a> to the address you connect
  via <a href="http://ecs.wgtn.ac.nz/cgi-bin/login/ip">HTTP</a>. If the
  addresses differ, selecting the "HTTPS only" option may help you log in and
  access the site, as you will always be connecting to the HTTPS version of
  the website.
</p>

<h4>Kerberos authentication</h4>
<p>
  A supporting web browser can log you in automatically using Kerberos if you
  are within the ECS environment. Currently common browsers such as Konqueror,
  Firefox, Safari and Internet Explorer have support for Kerberos.
</p>
<p>
  To tell your browser to prefer Kerberos over password authentication, you can
  set a cookie: <a href="/login?kerberos=1">Prefer Kerberos authentication</a>;
  <a href="/login?kerberos=0">Prefer password authentication</a>.
</p>
<p>
  Even if your browser has Kerberos support, it may fail to log you in 
  automatically. This may be because you have not logged in within the last 
  10 hours, and your Kerberos ticket has expired. Typing "kinit" at your shell
  prompt every morning will give you a fresh ticket.
</p>

<h4>Popup authentication boxes</h4>
<p>
  If you are using Internet Explorer, you may be hitting an IE bug that pops
  up an <a href="/technical/TechNotes/msie-popup.jpg">authentication dialog</a>
  if Kerberos authentication fails. To avoid this
  happening again, you can <a href="/login?kerberos=0">set a cookie</a> to use
  password authentication in preference to Kerberos.
</p>

<h4>Requesting help</h4>
<p>
  As usual, if you have trouble logging in you can contact the ECS Tech Staff
  by email, giving as much information as possible:
  <a href="mailto:bugs@ecs.vuw.ac.nz">bugs@ecs.vuw.ac.nz</a>.
</p>

</div>
            </main>

        

        </div>

<!--     </div>
 -->
</section>
    

<footer role="contentinfo">

    <!-- Links and contacts that can vary between sub-sites -->
    <!-- Links and contacts that can vary between sub-sites -->
<section class="footer-secondary two-columns">
    <div class="centraliser">
        <!-- Sub-site's related or recommended links -->
        <div class="block">
            <h2>Useful links</h2>
            <nav role="navigation">
              <ul role="menubar">
<li> <a href="https://www.wgtn.ac.nz/ecs/study/undergraduate-study">Undergraduate study</a></li>
<li> <a href="https://www.wgtn.ac.nz/ecs/study/postgraduate-study">Postgraduate study</a></li>
<li> <a href="https://www.wgtn.ac.nz/ecs/research/groups">Research groups</a></li>
		<li> <a href="https://www.wgtn.ac.nz/ecs/about/staff">Staff</a></li>
		<li> <a href="https://ecs.wgtn.ac.nz/Main/">Wiki</a></li>

                    <li><a href="" role="menuitem" title="Read about "></a></li>
                </ul>
            </nav>
        </div>
        <!-- Sub-site's related links -->
        <div class="block contacts">
            <a href="https://www.wgtn.ac.nz/ecs/about/contact" title="See all contact information" class="link-more">More contacts</a>

            <h2>Useful contacts</h2>
            <address>
                <!-- Phone numbers -->
               
                <ul class="phones">
                    <li><a href="tel:+64 4 463 5341" title="Call to general enquiries team">+64 4 463 5341</a> </li>

                                   </ul>

               
                <!-- Mail addresses -->
                <ul class="mails">
                    <li>
                        <a href="mailto:office@ecs.vuw.ac.nz" title="Send an email to office@ecs.vuw.ac.nz">office@ecs.vuw.ac.nz</a> 
                    </li>
                                    </ul>
             
        
            </address>
              
         
        </div>
    </div>
</section>
 
 
 
 <!-- Footer Related links from global site -->
    <section class="footer-secondary">
        <div class="centraliser">
            <div class="block">
                <h2>Victoria University of Wellington</h2>
                <nav role="navigation">
                    <ul role="menubar">
                        <li role="menuitem"><a href="https://www.wgtn.ac.nz/about/explore-victoria/faculties-schools" role="menuitem" title="Read about Faculties">Faculties</a></li>
                        <li role="menuitem"><a href="https://www.wgtn.ac.nz/about/contacts" role="menuitem" title="Read about Contacts and directories">Contacts and directories</a></li>
                        <li role="menuitem"><a href="https://www.wgtn.ac.nz/about/explore-victoria" role="menuitem" title="Read about Campuses">Campuses</a></li>
                        <li role="menuitem"><a href="https://www.wgtn.ac.nz/study" role="menuitem" title="Read about Study">Study</a></li>
                        <li role="menuitem"><a href="https://www.wgtn.ac.nz/students" role="menuitem" title="Read about Students">Students</a></li>
                        <li role="menuitem"><a href="https://www.wgtn.ac.nz/staff" role="menuitem" title="Read about Staff">Staff</a></li>
                        <li role="menuitem"><a href="https://www.wgtn.ac.nz/about/careers" role="menuitem" title="Read about Careers">Careers</a></li>
                        <li role="menuitem"><a href="https://www.wgtn.ac.nz/engage/alumni" role="menuitem" title="Read about Alumni">Alumni</a></li>
                    </ul>
                </nav>
            </div>
        </div>
    </section>
    <!-- Meta-links and contacts that are shared between sub-sites -->
    <section class="footer-primary">
        <div class="centraliser">

            <div class="block">

                <!-- Smaller version of logotype -->
                <div class="logo">
                  <a href="https://www.wgtn.ac.nz" title="Victoria University of Wellington homepage">
                    <img class="logo" src="/vic-ui-kit/images//logo-white-full.svg" alt="Victoria University of Wellington - Te Whare Wānanga o te Ūpoko o te Ika a Māui">
                  </a>
                </div>
                <!-- Global contacts -->
                <ul class="contacts">
                    <li>
                        <a title="Call Victoria about general enquiries" href="tel:+6444721000">+64 4 472 1000</a>
                    </li>
                    <li>
                        <a title="Write Victoria an email" href="mailto:info@vuw.ac.nz">info@vuw.ac.nz</a>
                    </li>
                    <li>
                        Enrolments: <a title="Call Victoria regarding enrolments" href="tel:+64800040404">0800 04 04 04</a>
                    </li>
                    <li>
                        Emergency: <a title="Call in case of emergency" href="tel:+6444639999">+64 4 463 9999</a> or ext. 8888 (internal)
                    </li>
                </ul>

            </div>

            <div class="block small">

                <nav role="navigation">
                    <ul role="menubar" class="minilinks">
                        <li role="menuitem"><a title="See ..." href="https://www.wgtn.ac.nz/site-info">Site info</a></li>
                        <li role="menuitem"><a title="See ..." href="https://www.wgtn.ac.nz/site-info/site-map">Site map</a></li>
                        <li role="menuitem"><a title="See ..." href="https://www.wgtn.ac.nz/site-info/feedback">Feedback</a></li>
                        <li role="menuitem"><a title="See ..." href="https://www.wgtn.ac.nz/site-info/glossary">Glossary</a></li>
                    </ul>
                </nav>

                <small class="copyright">Copyright &copy; Victoria University of Wellington, New Zealand</small>

            </div>

        </div>
    </section>


</footer>



    <!-- toolkit scripts -->
    <script src="/vic-ui-kit/js/toolkit.js"></script>
    <!-- /toolkit scripts -->

    <script>
        function activateSidebar(){
            var errorMessage = [];
            var sidebarElements = $(".data-sidebar");
            var remainingSpaces = 3;
            var originalLimit = remainingSpaces;
            
            
            if (sidebarElements && sidebarElements.length > 0) {
                // $(".content").addClass("has-aside");
                // $("main").after('<aside role="complementary" id="rightHandMenu"></aside>');

                /* Get staff profile information first */
                for (var i = 0; i < sidebarElements.length; i++) {
                    // Staff profiles doesn't affect sidebar max length
                    // if (remainingSpaces <= 0) break;
                    if (!sidebarElements[i].movedToSidebar && ($(sidebarElements[i]).hasClass("contact") || $(sidebarElements[i]).is('address'))) {
                        // console.log($(sidebarElements[i]).text() + "Is related links");
                        $(sidebarElements[i]).detach().appendTo("#rightHandMenu");
                        sidebarElements[i].movedToSidebar = true;
                        // remainingSpaces--;
                    }
                }
            
                /* Get related links first */
                for (var i = 0; i < sidebarElements.length; i++) {
                    if (remainingSpaces <= 0) break;
                    if (!sidebarElements[i].movedToSidebar && $(sidebarElements[i]).hasClass("data-relatedLinks")) {
                        // console.log($(sidebarElements[i]).text() + "Is related links");
                        $(sidebarElements[i]).detach().appendTo("#rightHandMenu");
                        sidebarElements[i].movedToSidebar = true;
                        remainingSpaces--;
                    }
                }
            
                /* Get download links second */
                for (var i = 0; i < sidebarElements.length; i++) {
                    if (remainingSpaces <= 0) break;
                    if (!sidebarElements[i].movedToSidebar && $(sidebarElements[i]).hasClass("data-downloads")) {
                        // console.log($(sidebarElements[i]).text() + "Is downloads");
                        $(sidebarElements[i]).detach().appendTo("#rightHandMenu");
                        sidebarElements[i].movedToSidebar = true;
                        remainingSpaces--;
                    }
                }
            
                for (var i = 0; i < sidebarElements.length; i++) {
                    if (remainingSpaces <= 0) break;
                    if (!sidebarElements[i].movedToSidebar) {
                        // console.log($(sidebarElements[i]).text() + "Is other");
                        $(sidebarElements[i]).detach().appendTo("#rightHandMenu");
                        sidebarElements[i].movedToSidebar = true;
                        remainingSpaces--;
                    }
                }
                /* List out any sidebar elements not moved to sidebar */
                if (sidebarElements.length > originalLimit) {
                    errorMessage.push("Too many elements for the sidebar. Currently there are " + sidebarElements.length + ". The Maximum is 3. Please remove sidebar class from elements you do not want to appear in the sidebar.");
                    var message = "The following sidebar elements were not added: <ul>";
                    for (var i = 0; i < sidebarElements.length; i++) {
                        if (!sidebarElements[i].movedToSidebar) {
                            // console.log($(sidebarElements[i]).text() + " not moved to sidebar");
                            message += "<li>" + (sidebarElements[i].id || $(sidebarElements[i]).text().trim().substring(0,80) + "...") + "</li>";
                        }
                    }
                    message += "</ul>";
                    errorMessage.push(message);
                }
            }
            
        }
        
        $(document).ready(function() {
                activateSidebar();
        });
    </script>
    

</body>
</html>
