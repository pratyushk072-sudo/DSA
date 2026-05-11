#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertionSort(vector<int> arr) {   // ✅ vector<int>, not just vector
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int x : arr) cout << x << " ";
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};

    insertionSort(arr);

    return 0;
}