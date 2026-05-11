#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    int a; 
    cout << "Enter the number of elements in the array: ";
    cin >> a;

    vector<int> arr(a);

    cout << "Enter the elements: ";
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int smallest = arr[0];

    for(int i = 0; i < a; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    int secsmallest = INT_MAX;

    for(int i = 0; i < a; i++) {
        if(arr[i] > smallest && arr[i] < secsmallest) {
            secsmallest = arr[i];
        }
    }

    cout << "The second smallest element is: " << secsmallest;
}