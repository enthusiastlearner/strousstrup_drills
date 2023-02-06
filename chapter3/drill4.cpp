
// 4. Declare a char variable called friend_sex and initialize its value to 0. Prompt the user to
// enter an m if the friend is male and an f if the friend is female. Assign the value entered to the
// variable friend_sex. Then use two if-statements to write the following:
// If the friend is male, write "If you see friend_name please ask him to call me."
// If the friend is female, write "If you see friend_name please ask her to call me."

#include <iostream>
using namespace std;

int main ()
{
    string first_name, person_name, friend_name;
    char friend_sex = 0;
    
    cout << "Enter your first name!" << endl;
    cin >> first_name;
    
    cout << "Hello" << " " << first_name << "!" << endl;
    
    cout << "Enter the person to whom you need to write a letter!" << endl;
    cin >> person_name;
    
    cout << "Enter the name of your friend" << endl;
    cin >> friend_name;
    
    cout << "Enter the sex of your friend. If male enter m and if female enter f\n";
    cin >> friend_sex;
    
    if (friend_sex == 'm')
        cout << "Dear" << " " << person_name << ",\n\t" <<
        "How are you? I am fine. I miss you. I am happy that I am able to write a letter using c++. Have you seen"
        << " " << friend_name << " lately?" << " If you see " << friend_name << " please ask him to call me.";
    else if (friend_sex == 'f')
        cout << "Dear" << " " << person_name << ",\n\t" << 
        "How are you? I am fine. I miss you. I am happy that I am able to write a letter using c++. Have you seen"
        << " " << friend_name << " lately?" << " If you see " << friend_name << " please ask her to call me.";
    else
        cout << " Enter correct sex!";
    return 0;
}
