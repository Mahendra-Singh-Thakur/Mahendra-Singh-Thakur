package com.rms.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import com.rms.util.DBUtil;

public class userDaoImpl implements userDao {
	@Override
	public boolean addUser(User User) {
		String query = "INSERT INTO users (username, email, password) VALUES (?, ?, ?)";

		try (Connection connection = DBUtil.getConnection();
				PreparedStatement preparedStatement = connection.prepareStatement(query)) {

			preparedStatement.setString(1, User.getUsername());
			preparedStatement.setString(2, User.getEmail());
			preparedStatement.setString(3, User.getPassword());

			int rowsAffected = preparedStatement.executeUpdate();

			return rowsAffected > 0;
		} catch (SQLException e) {
			e.printStackTrace();
			return false;
		}
	}

	@Override
	public boolean isValidUser(String username, String password) {
		String query = "SELECT * FROM users WHERE username = ? AND password = ?";
		try (Connection connection = DBUtil.getConnection();
				PreparedStatement preparedStatement = connection.prepareStatement(query)) {

			preparedStatement.setString(1, username);
			preparedStatement.setString(2, password);

			ResultSet resultSet = preparedStatement.executeQuery();

			return resultSet.next();
		} catch (SQLException e) {
			e.printStackTrace();
			return false;
		}
	}
}