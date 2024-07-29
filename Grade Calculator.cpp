
#include <iostream>
using namespace std;
int main()
{
    int per;
    char gr;
    cout <<  "Enter Percentage\n";
    cin >> per;
   
    if (per < 100) {
        if (per >= 90) {
            gr = 'A';
            cout << gr;
        }
        else if (per >= 80) {
            gr = 'B';
            cout << gr;
        }
        else if (per >= 70) {
            gr = 'C';
            cout << gr;
        }
        else if (per >= 60) {
            gr = 'D';
            cout << gr;
        }
        else {
            gr = 'F';
            cout << gr;
        }


    }
    else
        cout << "Invalid output";
}

