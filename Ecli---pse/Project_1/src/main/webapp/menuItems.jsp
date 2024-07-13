<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<title>Rajput Restaurant Menu</title>
<link href="CSS/menu.css" type="text/css" rel="stylesheet">
</head>
<body>
    <div id="main1">
        <section> 
            <div id="navbar">
                <div id="camp">Rajput Restaurant</div>
            </div>
        </section>
        <div id="main2">
            <div id="menuContainer">
                <h1>Menu</h1>
                <!-- Menu items will be dynamically inserted here -->
            </div>
            <div id="cartContainer">
                <h1>Your Cart</h1>
                <div id="cartItems">
                    <!-- Cart items will be dynamically added here -->
                </div>
                <p id="totalPrice">Total: $0.00</p>
                <button id="checkoutButton">Checkout</button>
            </div>
        </div>
    </div>
<script src="JS/menu.js"></script>
</body>
</html>

