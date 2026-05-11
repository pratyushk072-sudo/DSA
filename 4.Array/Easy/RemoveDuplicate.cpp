#include<iostream>
#include<vector>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of the element in the array: ";
    cin >> a;

    vector<int> arr(a);

    cout << "Enter the elements: ";
    
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    int i = 0;

    for(int j = 1; j < a; j++) {
        if(arr[i] != arr[j]) {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    cout << "The array after removing the duplicates is: ";
    
    for(int k = 0; k <= i; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
}