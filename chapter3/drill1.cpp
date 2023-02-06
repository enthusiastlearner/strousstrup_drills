// 1. This drill is to write a program that produces a simple form letter based on user input. Begin
// by typing the code from §3.1 prompting a user to enter his or her first name and writing “Hello,
// first_name” where first_name is the name entered by the user. Then modify your code as
// follows: change the prompt to “Enter the name of the person you want to write to” and change
// the output to “Dear first_name,”. Don’t forget the comma.

#include <iostream>
using namespace std;

int main ()
{
  cout << "Enter your first name!" << endl;
  string first_name, person_name;
  cin >> first_name;
  cout << "Hello" << " " << first_name << "!" << endl;
  cout << "Enter the person you want to say hello!" << endl;
  cin >> person_name;
  cout << "Dear" << " "<< person_name <<"," << endl;
  return 0;
}
