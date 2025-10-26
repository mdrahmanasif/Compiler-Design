#include <iostream>
#include <string>
using namespace std;
int main() {
   string input;
 cout << "Enter a line: ";
 getline(cin, input);
    if (input.length() >= 2 && input[0] == '/' && input[1] == '/') {
  cout << "This is a single-line comment." << endl;
    }
    else if (input.length() >= 4 && input.substr(0, 2) == "/*" && input.substr(input.length() - 2) == "*/") {
     cout << "This is a multi-line comment." << endl;
    }
  else {
        cout << "This is NOT a comment." << endl;
    }
return 0;
}

