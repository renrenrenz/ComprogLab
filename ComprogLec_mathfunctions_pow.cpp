#include <iostream>
#include <math.h>
using namespace std;

int main () {
    double num1, num2;

    cout << "****** pow() function ******" << endl;
    cout << "\nEnter the base: ";
    cin >> num1;
    cout << "\nEnter the exponent: ";
    cin >> num2;


    cout << "\n" << num1 << "^" << num2 << " = " << pow (num1, num2) << endl;

system ("pause > 0");
return 0;
}