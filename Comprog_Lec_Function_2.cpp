#include <iostream>
using namespace std;

double ArithmeticOperation (double num1, double num2, char ope) {
    switch (ope) {
        case '+': 
            cout << "The result of the operation is: " << num1 + num2;
            break;
        case '-':
            cout << "The result of the operation is: " << num1 - num2;
            break;
        case '*':
            cout << "The result of the operation is: " << num1 * num2;
            break;
        case '/':
            cout << "The result of the operation is: " << num1 / num2;
            break;

    }
}

int main () {

    double a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b ;

    cout << "Enter the oprator (+, -, *, /): ";
    cin >> op;

    ArithmeticOperation (a, b, op);

return 0;
}