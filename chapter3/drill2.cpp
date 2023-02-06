// 2. Add an introductory line or two, like “How are you? I am fine. I miss you.” Be sure to indent
// the first line. Add a few more lines of your choosing — it’s your letter.

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
  cout << "\t" << "How are you? I am fine. I miss you. I am happy that I am able to write a letter using c++." << endl;
  return 0;
}
