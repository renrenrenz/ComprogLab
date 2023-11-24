#include <iostream>
using namespace std;

void CountDigits(int num) {
    if (num <= 0) {
                cout << "It is a non-positive number" << endl;
            } else if (num < 10) {
                cout << "It is a positive number with 1 digit" << endl;
            } else if (num < 100) {
                cout << "It is a positive number with 2 digits" << endl;
            } else if (num < 1000) {
                cout << "It is a positive number with 3 digits" << endl;
            } else if (num < 10000) {
                cout << "It is a positive number with 4 digits" << endl;
            } else {
                cout << "The number has more than 4 digits" << endl;
            }
}

int main () {
    int digit;

    cout << "Enter a number: ";
    cin >> digit;

    CountDigits(digit);

return 0;
}