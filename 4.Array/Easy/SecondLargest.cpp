#include<iostream>
#include<vector>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of element in the array: ";
    cin >> a;

    vector<int> arr(a);

    cout << "Enter the elements: ";
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];

    for(int i = 0; i < a; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    int secLargest = -1;

    for(int i = 0; i < a; i++) {
        if(arr[i] > secLargest && arr[i] != largest) {
            secLargest = arr[i];
        }
    }

    cout << "The second largest element in the array is: " << secLargest;
}