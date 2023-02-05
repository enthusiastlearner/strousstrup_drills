// read first and second name
# include <iostream>
using namespace std;
int main()
{
    cout << " Enter your first and last name separated by space or Enter:" << endl;
	string first_name, second_name;
	cin >> first_name >> second_name;
	string name = first_name + ' ' + second_name;
	cout << name << endl;
}
