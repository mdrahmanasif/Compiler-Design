#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
bool isKeyword(char word[]) {
    const char* keywords[] =
    {"int","float","double","char","return","if","else","for","while",
     "do","include","using","namespace","std","main","const","void"};
    int size = sizeof(keywords)/sizeof(keywords[0]);
    for(int i=0; i<size; i++) {
        if(strcmp(word, keywords[i]) == 0) return true;
    }
    return false;
}
bool isOperator(char c) {
    char operators[] = "+-*/%=<>&|!";
    for(int i = 0; operators[i] != '\0'; i++)
        if(c == operators[i]) return true;
    return false;
}
bool isPunctuation(char c) {
    char punct[] = "();{}[],.#";
    for(int i = 0; punct[i] != '\0'; i++)
        if(c == punct[i]) return true;
    return false;
}

bool isConstant(char word[]) {
    for(int i=0; word[i] != '\0'; i++)
        if(!(word[i] >= '0' && word[i] <= '9')) return false;
    return true;
}
bool isIdentifier(char word[]) {
    if(!( (word[0] >= 'a' && word[0] <= 'z') ||
          (word[0] >= 'A' && word[0] <= 'Z') ||
          word[0] == '_' )) return false;

    for(int i=1; word[i] != '\0'; i++)
        if(!((word[i] >= 'a' && word[i] <= 'z') ||
             (word[i] >= 'A' && word[i] <= 'Z') ||
             (word[i] >= '0' && word[i] <= '9') ||
             word[i] == '_' )) return false;

    return true;
}
int main() {
    ifstream file("sample.txt");
    if(!file) {
        cout << "File not found!";
        return 0;
    }
char line[500];
    int lineNo = 1;
while(file.getline(line, 500)) {
        cout << "\nLine " << lineNo << ": " << line << "\n";
char word[50];
        int idx = 0;
for(int i=0; line[i] != '\0'; i++) {
if(line[i] == ' ') {
                if(idx > 0) {
                    word[idx] = '\0';
if(isKeyword(word))
                        cout << word << " -> Keyword\n";
        else if(isConstant(word))
        cout << word << " -> Constant\n";
        else if(isIdentifier(word))
        cout << word << " -> Identifier\n";
idx = 0;
                }
            }
else if(isOperator(line[i])) {
                if(idx > 0) {
        word[idx] = '\0';
    if(isKeyword(word))
    cout << word << " -> Keyword\n";
                    else if(isConstant(word))
        cout << word << " -> Constant\n";
        else if(isIdentifier(word))
            cout << word << " -> Identifier\n";
    idx = 0;
                }
                cout << line[i] << " -> Operator\n";
            }
else if(isPunctuation(line[i])) {
        if(idx > 0) {
        word[idx] = '\0';
        if(isKeyword(word))
            cout << word << " -> Keyword\n";
        else if(isConstant(word))
    cout << word << " -> Constant\n";
    else if(isIdentifier(word))
        cout << word << " -> Identifier\n";
        idx = 0;
                }
        cout << line[i] << " -> Punctuation\n";
            }

            else {
                word[idx++] = line[i];
            }
        }
if(idx > 0) {
            word[idx] = '\0';
            if(isKeyword(word))
                cout << word << " -> Keyword\n";
            else if(isConstant(word))
                cout << word << " -> Constant\n";
            else if(isIdentifier(word))
                cout << word << " -> Identifier\n";
        }
    lineNo++;
    }
   return 0;
}


