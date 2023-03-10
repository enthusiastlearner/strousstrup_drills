// convert from inches to centimeters or centimeters to inches
// a suffix āiā or ācā indicates the unit of the input
// any other suffix is an error

#include <iostream>

using namespace std;

int main()
{
    constexpr double cm_per_inch = 2.54; // cms in an inches
    
    double length   = 1;
    char unit       = '\0';
    
    cout << " Please enter a length followed by unit (c for cm and i for inch):\n";
    cin >> length >> unit;
    
    if (unit == 'i')
        cout << length << "in = " << cm_per_inch * length << " cm\n";
    else if (unit == 'c')
        cout << length << "cm = " << length / cm_per_inch << " in\n";
    else
        cout << "I do not know the specified units\n";
        
    return 0;
}
