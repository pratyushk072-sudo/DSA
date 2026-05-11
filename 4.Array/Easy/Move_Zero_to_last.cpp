#include<iostream>
#include<vector>
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

    /*
    // Brute Force
    vector<int> temp;

    for(int i = 0; i < a; i++) {
        if(arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    int nz = temp.size();

    for(int i = 0; i < nz; i++) {
        arr[i] = temp[i];
    }

    for(int i = nz; i < a; i++) {
        arr[i] = 0;
    }
    */

    // Otimised Method

    int j = -1;

    for(int i = 0; i < a; i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1) return 0;

    for(int i = j + 1; i < a; i++) {
        if(arr[i] != 0) {
            swap(arr[i],arr[j]);
            j++;
        }
    }

    cout << "After sending zero to the back: ";
    for(int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
}