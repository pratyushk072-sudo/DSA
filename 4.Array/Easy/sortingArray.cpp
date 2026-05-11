#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of elements of the array: ";
    cin >> a;

    vector<int> arr(a);

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    /* sort(arr.begin(), arr.end());
    cout << "The sorted array is: ";
    for(int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
    return 0;
    */
    for(int i = 0; i < a - 1; i++) {
        for(int j = 0; j < a - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j],arr[j + 1]);
            }
        }
    }
    cout << "Sorted Array: ";

    for(int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

}