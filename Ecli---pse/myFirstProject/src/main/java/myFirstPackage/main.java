package myFirstPackage;

import java.util.List;
import java.util.Scanner;

public class main {

	public static void main(String[] args) {
		users u = new users();
		Scanner scanner = new Scanner(System.in);

		while (true) {
			System.out.println("Choose an option:");
			System.out.println("1. Create a new user");
			System.out.println("2. Read all users");
			System.out.println("3. Update a user");
			System.out.println("4. Delete a user");
			System.out.println("5. Exit");
			int choice = scanner.nextInt();
			scanner.nextLine(); // Consume the newline character

			switch (choice) {
			case 1:
				// Create a new user
				System.out.print("Enter name: ");
				String name = scanner.nextLine();
				System.out.print("Enter email: ");
				String email = scanner.nextLine();
				System.out.print("Enter password: ");
				String password = scanner.nextLine();
				user newUser = new user(name, email, password);
				u.setData(newUser);
				break;

			case 2:
				// Read and display all users
				List<user> userList = u.getData();
				for (user user : userList) {
					System.out.println(user);
				}
				break;

			case 3:
				// Update user information
				System.out.print("Enter the email of the user to update: ");
				String oldEmail = scanner.nextLine();
				System.out.print("Enter new name: ");
				String newName = scanner.nextLine();
				System.out.print("Enter new email: ");
				String newEmail = scanner.nextLine();
				System.out.print("Enter new password: ");
				String newPassword = scanner.nextLine();
				user updatedUser = new user(newName, newEmail, newPassword);
				u.updateData(oldEmail, updatedUser);
				break;

			case 4:
				// Delete a user
				System.out.print("Enter the email of the user to delete: ");
				String deleteEmail = scanner.nextLine();
				u.deleteData(deleteEmail);
				break;

			case 5:
				// Exit
				scanner.close();
				System.out.println("Exiting...");
				System.exit(0);
				break;

			default:
				System.out.println("Invalid choice. Please try again.");
			}
		}
	}
}
