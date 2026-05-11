#include<iostream>
#include<vector>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of elements in the array: ";
    cin >> a;

    vector<int> arr(a);

    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int smallest = arr[0];

    for(int i = 0; i < a; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "The smallest element in the array is: " << smallest;
}