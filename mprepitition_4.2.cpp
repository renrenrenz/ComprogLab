#include <iostream>
using namespace std;

int main () 
{
    double sum = 0.0;
    int num, i = 1;

    cout << "Enter n: ";
    cin >> num;

    cout << "Sum of the series: ";
    
        do {
            sum += double(i) / (i + 1) ;
            cout << i << "/" << (i + 1) ;
            
                if (i < num) {
                    cout << " + ";
                } else {
                    cout << " = ";
                }
                
            i++;
        } while (i <= num);

    cout << sum << endl;

return 0;
}