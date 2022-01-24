#include <iostream>

int main() {


	std::string password = "123456";
	std::string input;

	std::cout << "Please enter password: ";
	std::cin >> input;

	if (input == password) {
		std::cout << "Yes!!!" << std::endl;
	}
	else {
		std::cout << "No!!!" << std::endl;

	}

	system("pause");

	return 0;
}