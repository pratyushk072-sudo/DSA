#include <bits/stdc++.h>
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

    map<int, int> mpp;

    for(int i = 0; i < a; i++) {
        mpp[arr[i]]++;
    }

    for(auto it : mpp) {
        if(it.second > (arr.size() / 2)) {
            cout << "Majority element is: " << it.first;
            return 0;
        }
    }

    cout << "No majority element found";
    return 0;
}