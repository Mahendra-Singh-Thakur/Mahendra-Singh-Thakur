package com.company.dao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

import com.company.util.MenuItem;

public class MenuDAO {
	private static final String JDBC_URL = "jdbc:mysql://localhost:3306/restaurant_db";
	private static final String JDBC_USER = "root";
	private static final String JDBC_PASSWORD = "password";

	public List<MenuItem> getMenuItems() {
		List<MenuItem> menuItems = new ArrayList<>();

		try (Connection connection = DriverManager.getConnection(JDBC_URL, JDBC_USER, JDBC_PASSWORD);
				Statement statement = connection.createStatement();
				ResultSet resultSet = statement.executeQuery("SELECT * FROM menu_items")) {

			while (resultSet.next()) {
				int id = resultSet.getInt("id");
				String name = resultSet.getString("name");
				String description = resultSet.getString("description");
				double price = resultSet.getDouble("price");

				MenuItem menuItem = new MenuItem(id, name, description, price);
				menuItems.add(menuItem);
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}

		return menuItems;
	}
}
