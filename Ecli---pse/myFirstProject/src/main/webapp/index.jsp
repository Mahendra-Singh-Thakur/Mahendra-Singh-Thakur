<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Login</title>
</head>
<body>
<form action="loginServlet" method="post">
    <p>Username:</p>
    <input type="text" name="username" required>

    <p>Password:</p>
    <input type="password" name="password" required>

    <br><br>
    <input type="submit" value="Login">
</form>
</body>
</html>
