#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cout << "Enter the size of the array: ";
  cin >> a;

  int arr[a];
  for (int i = 0; i < a; i++) {
    cin >> arr[i];
  }

  // precompute

  int hash[20] = {0};
  for (int i = 0; i < a; i++) {
    hash[arr[i]]++;
  }

  int n;
  cin >> n;
  while (n--) {
    int number;
    cin >> number;
    // fetch
    cout << hash[number] << endl;
  }
}