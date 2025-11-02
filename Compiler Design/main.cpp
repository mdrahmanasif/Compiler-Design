#include <iostream>
#include "q1.h"
#include "q2.h"
#include "q3.h"
#include "q4.h"
#include "q5.h"
#include "q6.h"
#include "q7.h"
using namespace std;

int main() {
    int choice;

    cout << "Choose the function you want to run:" << endl;
    cout << "1. Run q1A()" << endl;
    cout << "2. Run q2A()" << endl;
    cout << "3. Run q3A()" << endl;
    cout << "4. Run q4A()" << endl;
    cout << "5. Run q5A()" << endl;
    cout << "6. Run q6A()" << endl;
    cout << "7. Run q7A()" << endl;
    cout << "Enter your choice (1-7): ";
    cin >> choice;

    switch(choice) {
        case 1:
            q1A();
            break;
        case 2:
            q2A();
            break;
        case 3:
            q3A();
            break;
        case 4:
            q4A();
            break;
        case 5:
            q5A();
            break;
        case 6:
            q6A();
            break;
        case 7:
            q7A();
            break;
        default:
            cout << " Please enter a number between 1 and 7." << endl;

    }

    return 0;
}
