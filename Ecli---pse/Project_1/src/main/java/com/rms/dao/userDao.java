package com.rms.dao;

public interface userDao {
	boolean addUser(User user);

	boolean isValidUser(String username, String password);

}
