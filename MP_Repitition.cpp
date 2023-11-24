#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
int choice = 0;
int upperLimit1; //for_loop1
int upperLimit2; //for_loop2
int upperLimit3, a3 = 1, b3 = 2, c3;; //while_loop1
double sum4 = 0.0; //do_while_loop
int num4, i4 = 1; //do_while_loop
int num5, digit; //while_loop2
string nword[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"}; //while_loop2

    cout << "\t\t\t\t\t\t\t\t\tMP Repititions";
    cout << "\n";
    cout << "\n\t\t\t\t\t\t*****************************************************************";
    cout << "\n\n\t\t\t\t\t\t1) For loop 1\t\t\t\t\t4) Do-While loop";
    cout << "\n\n\t\t\t\t\t\t2) For loop 2\t\t\t\t\t5) While loop 2";
    cout << "\n\n\t\t\t\t\t\t3) While loop 1" ;
    cout << "\n";
    cout << "\n\t\t\t\t\t\t*****************************************************************";
    cout << "\n\t\t\t\t\t\tChoose a loop: ";
    cin >> choice;
    cout << "\n\t\t\t\t\t\t*****************************************************************";

system ("cls");

        switch (choice) {
            case 1:
                cout << "Enter upper limit : ";
                cin >> upperLimit1;

                for (int n1 = 1; n1 <= upperLimit1;) {
                    if (n1 <= upperLimit1)
                    cout << n1 << " ";
                    n1 = n1 + 1;
                    if (n1 <= upperLimit1)
                    cout << n1 << " ";
                    n1 = n1 + 2;
                    if (n1 <= upperLimit1)
                    cout << n1 << " ";
                    n1 = n1 + 4;
                    if (n1 <= upperLimit1)
                    cout << n1 << " ";
                    n1 = n1 + 3;
                }
                break;
            
            case 2: 
                cout << "Enter upper limit : ";
                cin >> upperLimit2;

                for (int n2 = 1; n2 <= upperLimit2;) {
                    if (n2 <= upperLimit2)
                    cout << n2 << " ";
                    n2 = n2 + 2;
                    if (n2 <= upperLimit2)
                    cout << n2 << " ";
                    n2 = n2 + 6;
                    if (n2 <= upperLimit2)
                    cout << n2 << " ";
                    n2 = n2 + 4;
                    if (n2 <= upperLimit2)
                    cout << n2 << " ";
                    n2 = n2 + 5;
                    if (n2 <= upperLimit2)
                    cout << n2 << " ";
                    n2 = n2 + 1;
                    if (n2 <= upperLimit2)
                    cout << n2 << " ";
                    n2 = n2 + 3;
                }
                break;

            case 3:
                cout << "Enter upper limit : ";
                cin >> upperLimit3;
                
                
                while (a3 <= upperLimit3) {
                cout << b3 << " " << a3 << " ";
                b3 += a3;
                a3 += 2;
                }
                break;

            case 4:
                cout << "Enter n: ";
                cin >> num4;

                cout << "Sum of the series: ";
                
                    do {
                        sum4 += double(i4) / (i4 + 1) ;
                        cout << i4 << "/" << (i4 + 1) ;
                        
                            if (i4 < num4) {
                                cout << " + ";
                            } else {
                                cout << " = ";
                            }
                            
                        i4++;
                    } while (i4 <= num4);

                cout << sum4 << endl;
                break;

            case 5:
                cout << "Enter a number: ";
                cin >> num5;

                    while(num5 > 0) {
                        digit = num5 % 10;
                        cout << nword[digit];
                        
                            if (num5 > 10) {
                                cout << ", " ;
                            }
                        num5 /= 10;
                    }
                cout << endl;
                break;

            default: 
                cout << "Invalid Input";
        }
 
system ("pause>0");
return 0;
}