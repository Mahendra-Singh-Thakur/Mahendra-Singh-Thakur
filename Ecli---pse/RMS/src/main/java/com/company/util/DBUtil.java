package com.company.util;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DBUtil {
	private static final String URL = "jdbc:mysql://localhost:3306/db";
	private static final String USERNAME = "root";
	private static final String PASSWORD = "21{@MaHeNdRa@}10";
	static {
		try {
			// Load the MySQL JDBC driver
			Class.forName("com.mysql.cj.jdbc.Driver");
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		}
	}

	public static Connection getConnection() throws SQLException {
		try {
			DriverManager.getConnection(URL, USERNAME, PASSWORD);
			System.out.println("Data created successfully");
		} catch (

		Exception e) {
			e.printStackTrace();
		}
		return DriverManager.getConnection(URL, USERNAME, PASSWORD);
	}
}