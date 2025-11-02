#include <iostream>
using namespace std;

int q7A() {
 char firstName[50] = "Asif";
 char lastName[50] = "Rahman";
 char fullName[100];
int i = 0, j = 0;
    while (firstName[i] != '\0') {
 fullName[i] = firstName[i];
        i++;
    }
 fullName[i] = ' ';
    i++;
    while (lastName[j] != '\0') {
        fullName[i] = lastName[j];
     i++;
    j++;
    }
    fullName[i] = '\0';
cout << "Full Name = " << fullName << endl;
 return 0;
}

