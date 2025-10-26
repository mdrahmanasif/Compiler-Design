#include<iostream>
using namespace std;
bool isNum(){
    string c ;
    cin>> c;
    for(int i=0;i<c.length();i++){
            if(c[i]>47 && c[i]<57){
                return true;
            }
        else return false;
    }
    }

int main()
{
  cout<< isNum() ;
    return 0;
}
