#include <iostream>
#include <vector>
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

    int n;
    cout << "Enter the element to find in the array: ";
    cin >> n;

    bool found = false;

    for(int i = 0; i < a; i++) {
        if(arr[i] == n) {
            found = true;
            break;
        }
    }

    if(found) {
        cout << "Yes, " << n << " is present in the array";
    } else {
        cout << "No, " << n << " is not present in the array";
    }

    return 0;
}