#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() 
{
    int num5, digit;
    string nword[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};


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
    
system("pause >0 ");
return 0;
}