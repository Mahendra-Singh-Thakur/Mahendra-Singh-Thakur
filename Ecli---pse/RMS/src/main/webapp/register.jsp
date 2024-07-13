<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Registration Page</title>
    <link href="CSS/registration.css" type="text/css" rel="stylesheet">
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
                 <form id="registrationForm" action="Register" method="post">
                    <h1>Register</h1>
                    <label for="username">Username:</label>
                    <input type="text" id="username" name="username" required><br>
                    <label for="email">Email:</label>
                    <input type="email" id="email" name="email" required><br>
                    <label for="password">Password:</label>
                    <input type="password" id="password" name="password" required><br>
                    <button type="submit">Register</button>
                    <a id="backbtn" href="index.jsp">Back to Home</a>
                </form>

                <% String error = request.getParameter("error");
                   if (error != null && error.equals("1")) { %>
                    <p style="color: red;">Registration failed. Please try again.</p>
                <% } %>
            </div>
        </div>
    </div>
</body>
</html>
