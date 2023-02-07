// 7. Add “Yours sincerely,” followed by two blank lines for a signature, followed by your name.

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
    
    cout << "Enter your age!\n";
    cin >> age;
    
    if (age <= 0 || age >= 110)
        simple_error("You're kidding!");
    
    cout << "Enter the sex. If male enter m and if female enter f\n";
    cin >> friend_sex;
    
    if (friend_sex == 'm')
    {
        cout << "Dear" << " " << person_name << ",\n\t" <<
        "How are you? I am fine. I miss you. I am happy that I am able to write a letter using c++. Have you seen"
        << " " << friend_name << " lately?" << " If you see " << friend_name << " please ask him to call me."
        << " " << "I hear you just had your birthday and you are" << " " << age << " " << "years old.";
    }
    else if (friend_sex == 'f')
    {
        cout << "Dear" << " " << person_name << ",\n\t" << 
        "How are you? I am fine. I miss you. I am happy that I am able to write a letter using c++. Have you seen"
        << " " << friend_name << " lately?" << " If you see " << friend_name << " please ask her to call me."
        << " " << "I hear you just had your birthday and you are" << " " << age << " " << "years old.";
    }
    
    else
        simple_error(" Enter correct sex!");

    if (age < 12)
        cout << " " << "Next year you will be" << " " << age+1;
    else if (age == 17)
        cout << " " << "Next year you will be able to vote.";
    else if (age > 70)
        cout << " " << "I hope you are enjoying retirement.";
    
    cout << "\n\n" << "Yours sincerely,";
    cout << "\n" << first_name;
    return 0;
}
