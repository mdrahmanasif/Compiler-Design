#include <iostream>
using namespace std;

int q5A() {
    int n;
cout << "Enter number of elements: ";
    cin >> n;
 int arr[n];
    int sum = 0;
 cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    float average = (float)sum / n;
cout << "Average value of array elements: " << average << endl;
  return 0;
}

