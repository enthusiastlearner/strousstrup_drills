// read and write a first name

# include <iostream>

int main()
{
	std::cout << "Please enter your first name (followed by 'enter'):\n";
	std::string first_name;
	std::cin >> first_name;
	std::cout << "Hello! Your firstname is: " << first_name << ".\n";
}
