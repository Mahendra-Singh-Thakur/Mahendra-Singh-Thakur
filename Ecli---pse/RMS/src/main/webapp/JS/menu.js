document.addEventListener("DOMContentLoaded", () => {
    fetch('menu')
        .then(response => response.json())
        .then(menuItems => {
            const menuContainer = document.getElementById("menuContainer");
            const cartItems = [];
            const cartItemsContainer = document.getElementById("cartItems");
            const totalPriceElement = document.getElementById("totalPrice");

            function updateCart() {
                cartItemsContainer.innerHTML = "";
                let totalPrice = 0;
                cartItems.forEach(item => {
                    const itemElement = document.createElement("div");
                    itemElement.className = "cartItem";
                    itemElement.innerText = `${item.name} - $${item.price.toFixed(2)}`;
                    cartItemsContainer.appendChild(itemElement);
                    totalPrice += item.price;
                });
                totalPriceElement.innerText = `Total: $${totalPrice.toFixed(2)}`;
            }

            function createMenuItem(item) {
                const menuItem = document.createElement("div");
                menuItem.className = "menuItem";

                const itemName = document.createElement("h2");
                itemName.innerText = item.name;

                const itemDescription = document.createElement("p");
                itemDescription.innerText = item.description;

                const itemPrice = document.createElement("p");
                itemPrice.className = "price";
                itemPrice.innerText = `$${item.price.toFixed(2)}`;

                const addToCartButton = document.createElement("button");
                addToCartButton.className = "addToCart";
                addToCartButton.innerText = "Add to Cart";
                addToCartButton.addEventListener("click", () => {
                    cartItems.push(item);
                    updateCart();
                });

                menuItem.appendChild(itemName);
                menuItem.appendChild(itemDescription);
                menuItem.appendChild(itemPrice);
                menuItem.appendChild(addToCartButton);
                menuContainer.appendChild(menuItem);
            }

            menuItems.forEach(createMenuItem);
        })
        .catch(error => console.error('Error fetching menu items:', error));
});
