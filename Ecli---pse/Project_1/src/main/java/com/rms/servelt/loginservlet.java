package com.rms.servelt;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.rms.dao.userDao;
import com.rms.dao.userDaoImpl;

public class loginservlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	private static userDao userDao = new userDaoImpl();

	public loginservlet() {
		super();
	}

	@Override
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		String username = request.getParameter("username");
		String password = request.getParameter("password");

		if (userDao.isValidUser(username, password)) {
			HttpSession session = request.getSession();
			session.setAttribute("username", username);
			response.sendRedirect("welcome.jsp");
		} else {
			response.sendRedirect("login.jsp?error=1");
		}
	}
}