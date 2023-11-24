#include <iostream>
#include <string>
using namespace std;

int main () {

    float n1, n2, ans;
    char op;

        cout << "Enter two numbers: ";
        cin >> n1 >> n2;

        cout << "Enter the oprator (+, -, *, /): ";
        cin >> op;

            switch (op) {
                case '+':
                cout << "The result of the operation is: " << n1 + n2 ;
                break;

                case '-':
                cout << "The result of the operation is: " << n1 - n2 ;
                break;

                case '*':
                cout << "The result of the operation is: " << n1 * n2 ;
                break;

                case '/':
                cout << "The result of the operation is: " << n1 / n2 ;
                break;

                default:
                cout << "Invalid Choise";
            }
            
system ("pause >0 ");
return 0;
}