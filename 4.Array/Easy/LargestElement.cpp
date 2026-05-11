#include<iostream>
#include<vector>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of elements in the array: ";
    cin >> a;

    vector<int> arr(a);

    cout << "Enter the numbers: ";
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];

    for (int i = 0; i < a; i++)
    {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "The largest element in the array is: " << largest;
    
}