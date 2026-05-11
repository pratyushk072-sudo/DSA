#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {1,1,1,0,1,0,0,1,0,1,1,0,0,1,0};
    int maxi = 0;
    int count = 0;

    for(int i = 0; i< arr.size(); i++) {
        if(arr[i] == 1) {
            count++;
            maxi = max(maxi,count);
        } else {
            count = 0;
        }
    }

    cout << "Maximum consecutive 1s: " << maxi << endl;
    return 0;
}