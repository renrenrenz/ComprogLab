#include <iostream>
#include <math.h>
using namespace std;

int main () {
    double num1, num2;

    cout << "****** max() function ******" << endl;
    cout << "\nEnter an Integer: ";
    cin >> num1;
    cout << "\nEnter an Integer: ";
    cin >> num2;

    cout << num1 << " > " << num2 << " = " << max(num1, num2) << endl;

system ("pause > 0");
return 0;
}