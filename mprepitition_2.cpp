#include <iostream>
using namespace std;

int main () 
{
    int Ulimit2, a2 = 1;
    int x2[6] = {2, 6, 4, 5, 1, 3};  
    cout << "Enter upper limit: ";
    cin >> Ulimit2;

    for (int i2 = 0; a2 < Ulimit2; i2++) {
        cout << a2 << " " ;
        a2 += x2[i2];
            if (i2 == 5) {
                i2 = -1;
            }    
    }
}