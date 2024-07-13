<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8" %>
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
                <div class="container">
        <form action="Login" method="post"> <!-- Change method to "post" -->
        <h1>Login</h1>
            <label for="username">Username:</label>
            <input type="text" id="username" name="username" required><br>
            <label for="password">Password:</label>
            <input type="password" id="password" name="password"
				required><br>
                                   <button type="submit">Login</button>
                        <a id="backbtn" href="index.jsp">Back to Home</a>
        </form>

        <%-- Display error message if login fails --%>
        <%
        String error = request.getParameter("error");
        if (error != null && error.equals("1")) {
        %>
                <p style="color: red;">Invalid username or password. Please try again.</p>
        <%
        }
        %>
        
        <%-- Display error message if Register Successful --%>
        <%
        String rs = request.getParameter("registration");
        if (rs != null && rs.equals("success")) {
        %>
                <p style="color: green;">Your Registration is Successful. Please Login.</p>
        <%
        }
        %>
                </div></div>
            </div>
        </div>
    </body>

    </html>