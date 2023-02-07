// 5. Prompt the user to enter the age of the recipient and assign it to an int variable age. Have your
// program write “I hear you just had a birthday and you are age years old.” If age is 0 or less or
// 110 or more, call simple_error("you're kidding!") using simple_error() from
// std_lib_facilities.h.

#include <iostream>
using namespace std;

inline void simple_error(string s)
{
    cerr << "error: " << s << '\n';
    exit(1);
}

int main ()
{
    string first_name, person_name, friend_name;
    char friend_sex = 0;
    int age;
    
    cout << "Enter your first name!" << endl;
    cin >> first_name;
    
    cout << "Hello" << " " << first_name << "!" << endl;
    
    cout << "Enter the person to whom you need to write a letter!" << endl;
    cin >> person_name;
    
    cout << "Enter the name of your friend" << endl;
    cin >> friend_name;
    
    cout << "Enter the sex of your friend. If male enter m and if female enter f\n";
    cin >> friend_sex;
    
    cout << "Enter your age!\n";
    cin >> age;
    
    if (age <= 0 || age >= 110)
    {
        simple_error("You're kidding!");
    }
    if (friend_sex == 'm')
        cout << "Dear" << " " << person_name << ",\n\t" <<
        "How are you? I am fine. I miss you. I am happy that I am able to write a letter using c++. Have you seen"
        << " " << friend_name << " lately?" << " If you see " << friend_name << " please ask him to call me."
        << " " << "I hear you just had your birthday and you are" << " " << age << " " << "years old.";
    else if (friend_sex == 'f')
        cout << "Dear" << " " << person_name << ",\n\t" << 
        "How are you? I am fine. I miss you. I am happy that I am able to write a letter using c++. Have you seen"
        << " " << friend_name << " lately?" << " If you see " << friend_name << " please ask her to call me."
        << " " << "I hear you just had your birthday and you are" << " " << age << " " << "years old.";
    else
        cout << " Enter correct sex!";
    return 0;
}
