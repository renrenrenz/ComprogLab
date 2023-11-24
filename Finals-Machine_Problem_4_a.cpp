#include <iostream>
using namespace std;

int main () {
    int a;

        cout << "Enter a number: ";
        cin >> a;

            if (a <= 0) {
                cout << "It is a non-positive number" << endl;
            } else if (a < 10) {
                cout << "It is a positive number with 1 digit" << endl;
            } else if (a < 100) {
                cout << "It is a positive number with 2 digits" << endl;
            } else if (a < 1000) {
                cout << "It is a positive number with 3 digits" << endl;
            } else if (a < 10000) {
                cout << "It is a positive number with 4 digits" << endl;
            } else {
                cout << "The number has more than 4 digits" << endl;
            }

system ("pause >0 ");
return 0;
}