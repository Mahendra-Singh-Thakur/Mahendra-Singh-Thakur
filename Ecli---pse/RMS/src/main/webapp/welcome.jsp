<%@ page import="javax.servlet.http.HttpSession" %>
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8" %>
<!DOCTYPE html>
<html>

<head>
    <meta charset="UTF-8">
    <title>Welcome Page</title>
    <link href="CSS/index.css" type="text/css" rel="stylesheet">
</head>

<body>
    <% 
    HttpSession session2 = request.getSession(false); 
    if (session != null && session.getAttribute("username") != null) { 
        String username = (String) session.getAttribute("username"); 
    %>
    <div id="main1">
        <section>
            <div id="navbar">
                <div id="camp">Rajput Restaurant</div>
            </div>
        </section>
        <div id="main2">
            <div id="main2c2">
                <div class="container">
                    <h1>Welcome, <%= username %>!</h1>
                    <p>You can <a href="index.jsp">LOGOUT</a> securely.</p>
                </div>
            </div>
        </div>
    </div>
    <% 
    } else {
        response.sendRedirect("index.jsp"); 
    } 
    %>
</body>

</html>
