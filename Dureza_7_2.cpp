#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>
using namespace std;

float cube (float num) {
    return pow(num, 3);
}

float sphere (float num) {
    return pow(num, 3) * 4/3 * 3.14159;
}

float RecPara (float n1, float n2, float n3) {
    return n1 * n2 * n3;
}

int main () {

    float num, a, b, c;
    char opt;

        do {
            cout << "*************************************************************************************************************************";
            cout << "\n\t\t\t\t\t\tVolume of Shapes";
            cout << "\n*************************************************************************************************************************";
            cout << "\n\n\t\t\t\t\t     [C] - Cube";
            cout << "\n\n\t\t\t\t\t     [S] - Sphere";
            cout << "\n\n\t\t\t\t\t     [R] - Rectangular Parallelepiped" ;
            cout << "\n\n\t\t\t\t\t     [X] - Exit" ;
            cout << "\n";
            cout << "\n*************************************************************************************************************************";
            cout << "\nChoose your option: ";
            cin >> opt;

            switch (opt) {
                case 'C':
                case 'c':
                    cout << "\nYou choose to solve the Volume of the Cube!";
                    cout << "\nEnter side: ";
                    cin >> num;
                    cout << "The volume of the cube is " << cube (num);
                    break;
                case 'S':
                case 's':
                    cout << "\nYou choose to solve the Volume of the Sphere!";
                    cout << "\nEnter radius: ";
                    cin >> num;
                    cout << "The volume of the sphere is " << sphere (num);
                    break;
                case 'R':
                case 'r':
                    cout << "\nYou choose to solve the Volume of the Rectangular Parallelepiped!";
                    cout << "\nEnter the side a, b, c: ";
                    cin >> a >> b >> c;
                    cout << "The volume of the Rectangular Parallelepiped is " << RecPara (a, b, c);
                    break;
                case 'X':
                case 'x':
                    return 0;
                    break;
                default : 
                    cout << "!! Invalid Option !!";
                    break;
            }

            cout << "\nPress any key to continue...\n";
            _getch();

        } while (opt != 'X' && opt != 'x');
            cout << "\nThank you for using the program.";
            system("pause >0 ");
            return 0;

}


