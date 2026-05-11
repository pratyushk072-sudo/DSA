#include<bits/stdc++.h>
using namespace std;

// Left Rotate

/*int main() {
    int a;
    cout << "Enter the size of the array: ";
    cin >> a;

    vector<int> arr(a);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int temp = arr[0];
    for(int i = 0; i < a - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[a - 1] = temp;

    cout << "Array after rotation: ";
    for(int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
*/

// Right Rotate

int main() {
    int a;
    cout << "Enter the number of the elements in the array: ";
    cin >> a;

    vector<int> arr(a);
    cout << "Enter the elements: ";
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int temp = arr[a - 1];

    for(int i = a - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;

    cout << "Array after roration: ";
    for(int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
}