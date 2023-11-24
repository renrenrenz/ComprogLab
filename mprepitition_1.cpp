#include <iostream>
using namespace std;

int main () 
{
    int Ulimit, x = 1, a = 0;

    cout << "Enter upper limit: ";
    cin >> Ulimit;

    for (int i = 1; x + a < Ulimit; i++) {
        cout << x + a << " ";
        x *= 2;
            if (i % 4 == 0) {
                a += 10;
                x = 1;
            }
    }
}