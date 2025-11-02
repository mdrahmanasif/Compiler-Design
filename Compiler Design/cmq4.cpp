#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    char first[53] = {'A','B','C','D','E','F','G','H','I','J','K','L','M',
                'N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
                    'a','b','c','d','e','f','g','h','i','j','k','l','m',
                        'n','o','p','q','r','s','t','u','v','w','x','y','z','_'};

    bool valid = false;
    for(int i = 0; i < 53; i++) {
        if(s[0] == first[i]) {
            valid = true;
            break;
        }
    }
    if(!valid) {
        cout << "Invalid Identifier" << endl;
        return 0;
    }
    char rest[63] = {'A','B','C','D','E','F','G','H','I','J','K','L','M',
                'N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
                'a','b','c','d','e','f','g','h','i','j','k','l','m',
            'n','o','p','q','r','s','t','u','v','w','x','y','z',
        '0','1','2','3','4','5','6','7','8','9','_'};

    for(int i = 1; i < s.length(); i++) {
    valid = false;
    for(int j = 0; j < 63; j++) {
    if(s[i] == rest[j]) {
            valid = true;
        break;
            }
        }
        if(!valid) {
     cout << "Invalid Identifier" << endl;
     return 0;
        }
    }
 cout << "Valid Identifier" << endl;
  return 0;
}


