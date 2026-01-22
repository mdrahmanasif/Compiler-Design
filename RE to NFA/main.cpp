#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    cout << "Enter string (only a and b): ";
    cin >> input;
    int state = 0;
    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];

        if (state == 0) {
            if (ch == 'a') state = 2;
            else if (ch == 'b') state = 1;
            else state = -1;
        }
        else if (state == 1) {
            if (ch == 'a') state = 2;
            else if (ch == 'b') state = 1;
            else state = -1;
        }
        else if (state == 2) {
            if (ch == 'a') state = 3;
            else if (ch == 'b') state = 4;
            else state = -1;
        }
        else if (state == 3) {
            if (ch == 'a') state = 3;
            else if (ch == 'b') state = 4;
            else state = -1;
        }
        else if (state == 4) {
            if (ch == 'a') state = 5;
            else state = -1;
        }
        else if (state == 5) {
            if (ch == 'a' || ch == 'b') state = 6;
            else state = -1;
        }
        else if (state == 6) {
            if (ch == 'a') state = 3;
            else if (ch == 'b') state = 4;
            else state = -1;
        }
        else {
            break;
        }
    }

    if (state == 2 || state == 3 || state == 6)
        cout << "String ACCEPTED\n";
    else
        cout << "String REJECTED\n";

    return 0;
}
