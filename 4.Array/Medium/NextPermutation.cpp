#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int a; 
    cout << "Enter the size of the array: ";
    cin >> a;

    vector<int> arr(a);

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    // Better approach using STL function
    /*
    next_permutation(arr.begin(), arr.end());

    cout << "The next permutation of the array is: ";
    for(int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
    */

    // Optimal approach without using STL function
    int i = a - 2;
    while(i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    if(i == -1) {
        reverse(arr.begin(), arr.end());
    } else {
        int j = a - 1;
        while(arr[j] <= arr[i]) {
            j--;
        }
        swap(arr[i], arr[j]);
        reverse(arr.begin() + i + 1, arr.end());
    }

    cout << "The next permutation of the array is: ";
    for(int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}