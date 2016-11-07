#include <iostream>
#include <cstdlib>
using namespace std;

double Celsius = 0, Kelvin = 0, Fahrenheit = 0;

void setValue(int num)
{
    switch(num)
    {
    case 1:
        {
            cout << "Celsius degrees: ";
            cin >> Celsius;
            Kelvin = Celsius + 273.15;
            Fahrenheit = Celsius * 1.8 + 32;
        } break;
    case 2:
        {
            cout << "Kelvin: ";
            cin >> Kelvin;
            Celsius = Kelvin - 273.15;
            Fahrenheit = Kelvin * 1.8 - 459.67;
     } break;
    case 3:
        {
            cout << "Fahrenheit degrees: ";
            cin >> Fahrenheit;
            Celsius = (Fahrenheit - 32) / 1.8;
            Kelvin = (Fahrenheit + 459.67) / 1.8;
        } break;
    default:exit(0);
    }
}

void getValue()
{
    cout << "Celsius degrees: " << Celsius << endl;
    cout << "Kelvin degrees: " << Kelvin << endl;
    cout << "Fahrenheit degrees: " << Fahrenheit << endl;
}

int main()
{
    int ch = 0;
    cout << "Choose the scale of temperature: " << endl;
    cout << "(1) - Celsius, (2) - Kelvin, (3) - Fahrenheit" << endl;
    cout << ">>";
    cin >> ch;
    setValue(ch);
    getValue();
    return 0;
}
