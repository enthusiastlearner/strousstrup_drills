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
    
    switch(unit)
    {
    case 'c':
        cout << length << "cm = " << length / cm_per_inch << " in\n";
        break;
    case 'i':
        cout << length << "in = " << cm_per_inch * length << " cm\n";
        break;
    default:
        cout << "I do not the specified units\n";
        break;
    }
        
    return 0;
}
