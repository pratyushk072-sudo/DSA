#include<iostream>
#include<vector>
using namespace std;

int main() {
    int a;
    cout << "Enter the even size of the array: ";
    cin >> a;

    if(a % 2 != 0) {
        cout << "Give even size of the array";
        return 0;
    }

    vector<int> arr(a);
    cout << "Enter the elements: ";
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    // Brute force approach: O(n) + O(n) time complexity and O(n) space complexity
    /*
    vector<int> pos, neg;

    for(int i = 0; i < a; i++) {
        if(arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    if(pos.size() != neg.size()) {
        cout << "Equal number of positive and negative elements required";
        return 0;
    }

    for(int i = 0; i < a/2; i++) {
        arr[2*i] = pos[i];
        arr[2*i + 1] = neg[i];
    }

    cout << "Rearranged array: ";
    for(int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
    */

    // Optimal approach: O(n) time complexity and O(1) space complexity
    int posIndex = 0, negIndex = 1;
    for(int i = 0; i < a; i++) {
        if(arr[i] < 0) {
            arr[negIndex] = arr[i];
            negIndex += 2;
        } else {
            arr[posIndex] = arr[i];
            posIndex += 2;
        }
    }
    cout << "Rearranged array: ";
    for(int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}