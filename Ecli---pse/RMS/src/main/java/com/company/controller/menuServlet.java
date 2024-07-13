package com.company.controller;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.List;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.company.dao.MenuDAO;
import com.company.util.MenuItem;

@WebServlet("/menu")
public class menuServlet extends HttpServlet {
	private MenuDAO menuDAO;

	@Override
	public void init() throws ServletException {
		menuDAO = new MenuDAO();
	}

	@Override
	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		List<MenuItem> menuItems = menuDAO.getMenuItems();

		response.setContentType("application/json");
		response.setCharacterEncoding("UTF-8");
		PrintWriter out = response.getWriter();

		String json = "[";
		for (int i = 0; i < menuItems.size(); i++) {
			MenuItem item = menuItems.get(i);
			json += String.format("{\"id\":%d,\"name\":\"%s\",\"description\":\"%s\",\"price\":%.2f}", item.getId(),
					item.getName(), item.getDescription(), item.getPrice());
			if (i < menuItems.size() - 1) {
				json += ",";
			}
		}
		json += "]";

		out.write(json);
		out.flush();
	}
}
