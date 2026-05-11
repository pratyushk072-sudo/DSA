#include<iostream>
#include<vector>
using namespace std;

int main() {
    int a,b;
    cout << "Enter the size of the first array: ";
    cin >> a;
    cout << "Enter the size of the second array: ";
    cin >> b;

    vector<int> arr1(a);
    vector<int> arr2(b);

    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < a; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the elements of the second array: ";
    for(int j = 0; j < a; j++) {
        cin >> arr2[j];;
    }

    vector<int> IntersectionArr;

    int i = 0;
    int j = 0;

    while(i < a && j < b) {
        if(arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            IntersectionArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    cout << "Intersected array: ";
    for(int c = 0; c < IntersectionArr.size(); c++) {
        cout << IntersectionArr[c] << " "; 
    }
}