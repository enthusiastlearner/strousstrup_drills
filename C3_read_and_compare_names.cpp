// read and compare names

# include <iostream>
using namespace std;
int main()
{
	cout << "Enter two names for comparison separated by space tab or enter:\n";
	string first_name, second_name;
	cin >> first_name >> second_name;
	if (first_name == second_name)
		cout << " Both names match with each other\n";
	else if (first_name < second_name)
		cout << first_name  << ' ' << "is alphabetically before " << ' ' << second_name << '\n';
	else
		cout << first_name  << ' ' << "is alphabetically after" << ' ' << second_name << '\n';
}
