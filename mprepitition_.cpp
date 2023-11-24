#include <iostream>
using namespace std;

int main () 
{
    double sum4 = 0.0;
    int num4, i4 = 1;

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

system("pause >0 ");
return 0;
}