package myFirstPackage;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.List;

public class users {

	private final String url = "jdbc:mysql://localhost:3306/db";
	private final String username = "root";
	private final String password = "21{@MaHeNdRa@}10";

	public void setData(user user) {
		try (Connection conn = DriverManager.getConnection(url, username, password);
				PreparedStatement pstm = conn
						.prepareStatement("INSERT INTO users (username, email, password) VALUES(?,?,?)")) {

			pstm.setString(1, user.getUsername());
			pstm.setString(2, user.getEmail());
			pstm.setString(3, user.getPassword());
			pstm.execute();
			System.out.println("Data created successfully");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public List<user> getData() {
		List<user> users = new ArrayList<>();
		try (Connection conn = DriverManager.getConnection(url, username, password);
				PreparedStatement pstm = conn.prepareStatement("SELECT * FROM users");
				ResultSet rs = pstm.executeQuery()) {

			while (rs.next()) {
				users.add(new user(rs.getString("username"), rs.getString("email"), rs.getString("password")));
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		return users;
	}

	public void updateData(String oldEmail, user updatedUser) {
		try (Connection conn = DriverManager.getConnection(url, username, password);
				PreparedStatement pstm = conn
						.prepareStatement("UPDATE users SET username=?, email=?, password=? WHERE email=?")) {

			pstm.setString(1, updatedUser.getUsername());
			pstm.setString(2, updatedUser.getEmail());
			pstm.setString(3, updatedUser.getPassword());
			pstm.setString(4, oldEmail);
			pstm.executeUpdate();
			System.out.println("Data updated successfully");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public void deleteData(String email) {
		try (Connection conn = DriverManager.getConnection(url, username, password);
				PreparedStatement pstm = conn.prepareStatement("DELETE FROM users WHERE email=?")) {

			pstm.setString(1, email);
			pstm.executeUpdate();
			System.out.println("Data deleted successfully");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
