// read name and age
# include <iostream>
int main()
{
	std::cout << "Please enter your first name and age:\n";
	std::string first_name;
	int age;
	std:: cin >> first_name >> age;
	std:: cout << "Hello, your name is " << first_name << "(age:" << age << ")\n";	
}
