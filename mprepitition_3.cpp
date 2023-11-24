#include <iostream>
using namespace std;

int main () {

int Ulimit3, n = 2, odd = 0;

    cout << "Enter upper number: ";
    cin >> Ulimit3;

        while (odd < Ulimit3) {
            odd++;

            if (odd % 2 == 1) {
                cout << n << " ";
                cout << odd << " ";
                n += odd;
            }
        }

}