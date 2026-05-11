#include<bits/stdc++.h>
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

    //Better Solution

    /*
    sort(arr.begin(), arr.end());

    int lastSmaller = INT_MIN;
    int count = 0;
    int longest = 1;

    for(int i = 0; i < a; i++) {

        if(arr[i] - 1 == lastSmaller) {
            count++;
            lastSmaller = arr[i];
        }
        else if(arr[i] != lastSmaller) {
            count = 1;
            lastSmaller = arr[i];
        }

        longest = max(longest, count);
    }

    cout << "The longest consecutive sequence is: " << longest;

    return 0;
    */

    //Optimal Solution
    unordered_set<int> s;
    for(int i = 0; i < a; i++) {
        s.insert(arr[i]);
    }

    int longest = 0;
    for(int i = 0; i < a; i++) {
        if(s.find(arr[i] - 1) == s.end()) {
            int count = 1;
            int current = arr[i];
            while(s.find(current + 1) != s.end()) {
                count++;
                current++;
            }
            longest = max(longest, count);
        }
    }

    cout << "The longest consecutive sequence is: " << longest;

    return 0;
}