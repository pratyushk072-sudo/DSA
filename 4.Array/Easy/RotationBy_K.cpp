#include<iostream>
#include<vector>
using namespace std;

/*
void left_rotate(vector<int> &arr, int d,int a) {
    d = d % a;
    vector<int> temp(d);

    for(int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    for(int i = d; i < a; i++) {
        arr[i - d] = arr[i];
    }

    for(int i = 0; i < d; i++) {
        arr[i + a -d] = temp[i];
    }
}
*/

void right_rotate(vector<int> &arr, int d, int a) {
    d = d % a;

    vector<int> temp(d);

    for(int i = 0; i < d; i++) {
        temp[i] = arr[a - d + i];
    }

    for(int i = a - d - 1; i >= 0; i--) {
        arr[i + d] = arr[i];
    }

    for(int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements in the array: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    //cout << "Enter the value by which you want to left rotate the array: ";
    cout << "Enter the value by which you want to right rotate the array: ";
    cin >> d;

    //left_rotate(arr, d, n);
    right_rotate(arr, d, n);

    cout << "The array after rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}