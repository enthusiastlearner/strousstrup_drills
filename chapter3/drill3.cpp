// 3. Now prompt the user for the name of another friend, and store it in friend_name. Add a line
// to your letter: “Have you seen friend_name lately?”

#include <iostream>
using namespace std;

int main ()
{
  cout << "Enter your first name!" << endl;
  string first_name, person_name, friend_name;
  cin >> first_name;
  cout << "Hello" << " " << first_name << "!" << endl;
  cout << "Enter the person to whom you need to write a letter!" << endl;
  cin >> person_name;
  cout << "Enter the name of your friend" << endl;
  cin >> friend_name;
  cout << "Dear" << " "<< person_name <<"," << endl;
  cout << "\t" << "How are you? I am fine. I miss you. I am happy that I am able to write a letter using c++. Have you seen" <<" " << friend_name << " lately?" << endl;
  return 0;
}
