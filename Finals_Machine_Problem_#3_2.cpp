#include <iostream>
#include <string>
using namespace std;

int main () {

    char agn, choice = 0;


    do {
        cout << "Enter character: ";
        cin >> choice;

            switch (choice) {
                case 'A' ... 'Z': 
                    cout << choice << " = Big case Alphabet";
                    break;
                case 'a' ... 'z':
                    cout << choice << " = Small case Alphabet";
                    break;
                case '0' ... '9':
                    cout << choice << " = Numbers";
                    break;
                default : 
                    cout << choice << " = Special Characters";  
            }
            
        cout << "\nAgain? (y/n): ";
        cin >> agn;
    } while (agn == 'y');

return 0;
}