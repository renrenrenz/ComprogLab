#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
char again;
int choice = 0;
int Ulimit1, x1 = 1, a1 = 0; //for_loop1
int Ulimit2, a2 = 1; //for_loop2
int x2[6] = {2, 6, 4, 5, 1, 3}; //for_loop2
int Ulimit3, n = 2, odd = 0; //while_loop1
double sum4 = 0.0; //do_while_loop
int num4, i4 = 1; //do_while_loop
int num5, digit; //while_loop2
string nword[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"}; //while_loop2

    do {

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
                cout << "Enter upper limit: ";
                cin >> Ulimit1;

                for (int i1 = 1; x1 + a1 < Ulimit1; i1++) {
                    cout << x1 + a1 << " ";
                    x1 *= 2;
                        if (i1 % 4 == 0) {
                            a1 += 10;
                            x1 = 1;
                        }
                }
                break;
            
            case 2: 
                cout << "Enter upper limit: ";
                cin >> Ulimit2;

                for (int i2 = 0; a2 < Ulimit2; i2++) {
                    cout << a2 << " " ;
                    a2 += x2[i2];
                        if (i2 == 5) {
                            i2 = -1;
                        }    
                }
                break;

            case 3:
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
        }


    cout << "\nWould you like to try again? (y/n): ";
    cin >> again;

system ("cls");

    } while ( again == 'y');


 
system ("pause>0");
return 0;
}