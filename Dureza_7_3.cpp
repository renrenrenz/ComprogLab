#include <iostream>
using namespace std;

int HCF(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return HCF(num2, num1 % num2);
    }
}

int main() {
    int a, b;

    cout << "Enter two positive integers: ";
    cin >> a >> b;

    cout << "HCF of " << a << " and " << b << " is " << HCF(a, b) << "." << endl;

system ("pause>0");
return 0;
}
