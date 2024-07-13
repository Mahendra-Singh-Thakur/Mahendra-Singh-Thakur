package myFirstPackage;

public class user {
	private String username;
	private String email;
	private String password;

	public user(String username, String email, String password) {
		this.username = username;
		this.email = email;
		this.password = password;
	}

	public String getUsername() {
		return username;
	}

	public String getEmail() {
		return email;
	}

	public String getPassword() {
		return password;
	}

	@Override
	public String toString() {
		return "Username: " + username + ", Email: " + email + ", Password: " + password;
	}
}
