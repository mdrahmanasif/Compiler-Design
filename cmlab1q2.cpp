#include <iostream>
using namespace std;
int main() {
    char operators[] = {'+', '-', '*', '/', '%', '='};
    string input;
 cout<<" Give a input: ";
    cin>>input;
 int count = 1;
    for (int i=0;i< input.length();i++){
        for (int j=0;j<6;j++){
    if (input[i]==operators[j]) {
    cout<<"operator"<<count<< ":"<<input[i]<<endl;
        count++;
        }
     }
   }

 return 0;
}
