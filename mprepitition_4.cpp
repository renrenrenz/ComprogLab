#include <iostream>
using namespace std;

int main () 
{
    int num;
    float n1 = 0, n2 = 1;
    float ans;

    cout << "Enter limit: ";
    cin >> num;

        do {
            n1++;
            n2++;
            cout << n1 << "/" << n2 << " + " ;
            n1/n2 += n1/n2;
        } while (n1 && n2 <= num);
return 0;
}