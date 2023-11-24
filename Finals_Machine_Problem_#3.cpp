#include <iostream>
using namespace std;

int main () {

    double gr;
    char agn;

    do {
        cout << "Enter the grade range: ";
        cin >> gr;

            
            if ( gr >= 97) {
            cout << "The Actual Grade is 4.0" << endl; 
            } else if ( gr >= 93) {
            cout << "The Actual Grade is 3.5" << endl;
            } else if ( gr >= 89) {
            cout << "The Actual Grade is 3.0" << endl;
            } else if ( gr >= 85) {
            cout << "The Actual Grade is 2.5" << endl;
            } else if ( gr >= 80) {
            cout << "The Actual Grade is 2.0" << endl;
            } else if ( gr >= 75) {
            cout << "The Actual Grade is 1.5" << endl;
            } else if ( gr >= 70) {
            cout << "The Actual Grade is 1.0" << endl;
            } else {
            cout << "The Actual Grade is 0.5" << endl;
            }

        cout << "Again? (y/n): ";
        cin >> agn;

    } while (agn == 'y');

system ("pause >0");
return 0;
}