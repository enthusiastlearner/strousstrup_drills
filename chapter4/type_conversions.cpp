#include <iostream>

using namespace std;

int main()
{
    double temp_in_celcius = 21.4;
    double temp_in_fahrenheit_1 = 9/5 * temp_in_celcius +32;
    double temp_in_fahrenheit_2 = 9.0/5 * temp_in_celcius +32;
    double temp_in_fahrenheit_3 = 9/5.0 * temp_in_celcius +32;

    cout << " the first variant has not been intializes as double" << endl;
    cout << temp_in_fahrenheit_1 << endl;
    cout << temp_in_fahrenheit_2 << endl;
    cout << temp_in_fahrenheit_3 << endl;
    
    temp_in_fahrenheit_1 = double(9)/5 * temp_in_celcius +32;
    cout << "The first variant can also be corrected using double(9):" << temp_in_fahrenheit_1 << endl;
    
    double temp = int{temp_in_fahrenheit_1};
    cout << " narrowing: int{} :" << temp << endl;
    return 0;
}
