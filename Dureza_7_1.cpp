#include <iostream>
#include <iomanip>
using namespace std;

float celsius_fahrenheit (float num) {
    return num * 9/5 + 32;
}

float fahrenheit_celsius (float num) {
    return (num - 32) * 5/9;
}

float celsius_kelvin (float num) {
    return num + 273.15;
}

int main () {
    float temp;
    int opt;
    char yn;

    do {

        cout << "*************************************************************************************************************************";
        cout << "\n\t\t\t\t\t\tTEMPERATURE CONVERTER";
        cout << "\n*************************************************************************************************************************";
        cout << "\n\n\t\t\t\t\t     [1] - Celsius to Fahrenheit";
        cout << "\n\n\t\t\t\t\t     [2] - Fahrenheit to Celsius";
        cout << "\n\n\t\t\t\t\t     [3] - Celsius to Kelvin" ;
        cout << "\n";
        cout << "\n*************************************************************************************************************************";
        cout << "\nChoose your option: ";
        cin >> opt;

            switch (opt) {
                case 1:
                    cout << "Enter temperature in Celsius: ";
                    cin >> temp;
                    cout << temp << " degree Celsius is " << celsius_fahrenheit(temp) << " degree Fahrenheit.";
                    break;
                case 2:
                    cout << "Enter temperature in Fahrenheit: ";
                    cin >> temp;
                    cout << temp << " degree Fahrenheit is " << fahrenheit_celsius(temp) << " degree Celsius.";
                    break;
                case 3:
                    cout << "Enter temperature in Celsius: ";
                    cin >> temp;
                    cout << temp << " degree Celsius is " << celsius_kelvin(temp) << " degree Kelvin.";
                    break;
                default:
                    cout << "Choice Invalid!!";
            }
        
        cout << "\n\nDo you want to continue[Y/N]?: ";
        cin >> yn;
        cout << "\n";

            if (yn == 'N' || yn == 'n') {
            return 1;
            }

    } while (yn == 'Y' || yn == 'y');

    cout << "\n";

system ("pause>0");
return 0;
}