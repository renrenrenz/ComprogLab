#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

float Area_Rectangle (float l, float w);
float Area_Circle (float r);

int main () {
    char opt;
    float A;

    do {
        cout << "\nS H A P E S\n";
        cout << "[R] - Rectangle\n";
        cout << "[C] - Circle\n";
        cout << "[X] - Exit\n";
        cout << "Enter your choice: ";
        cin >> opt;

            switch (opt) {
                case 'R':
                case 'r':
                    float length, width;
                        cout << "Enter length: ";
                        cin >> length;

                        cout << "Enter width: ";
                        cin >> width;

                        A = Area_Rectangle(length, width);
                        cout << fixed << setprecision(2);
                        cout << "The area of the rectangle is " << A;
                        break;
                case 'C':
                case 'c':
                    float radius;
                        cout << "Enter radius: ";
                        cin >> radius;

                        A = Area_Circle(radius);
                        cout << fixed << setprecision(2);
                        cout << "The area of the circle is " << A;
                        break;
                case 'X':
                case 'x':
                    return 0;
                    break;
                default: 
                    cout << "You've entered incorrect option...";

                cout << "\nPress any key to continue...\n";
                _getch();

            }
    } while (opt != 'X' && opt != 'x');
        cout << "\nThank you for using the program.";
        system("pause >0 ");
        return 0;
}