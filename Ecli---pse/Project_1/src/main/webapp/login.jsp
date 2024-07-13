<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Login Page</title>
    <link href="CSS/login.css" type="text/css" rel="stylesheet">
</head>
<body>
    <div id="main1">
        <section>
            <div id="navbar">
                <div id="camp">Rajput Restaurant</div>
            </div>
        </section>
        <div id="main2">
            <div id="main2c2">
                 <form id="loginForm" action="LoginServlet" method="post">
                 <form action="Login" method="post">
                    <h1>Login</h1>
                    <label for="username">Username:</label>
                    <input type="text" id="username" name="username" required><br>
                    <label for="password">Password:</label>
                    <input type="password" id="password" name="password" required><br>
                    <button type="submit">Login</button>
                    <a id="backbtn" href="index.jsp">Back to Home</a>
                </form>

                <% String error = request.getParameter("error");
                   if (error != null && error.equals("1")) { %>
                    <p style="color: red;">Invalid username or password. Please try again.</p>
                <% } %>

                <% String registration = request.getParameter("registration");
                   if (registration != null && registration.equals("success")) { %>
                    <p style="color: green;">Your Registration is Successful. Please Login.</p>
                <% } %>
            </div>
        </div>
    </div>
</body>
</html>
