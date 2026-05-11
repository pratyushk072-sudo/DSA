#include<bits/stdc++.h>
using namespace std;

void printnumber(int n) {
    cout << n << endl;

    if(n == 0) {
        return;
    }

    printnumber(n-1);
}

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printnumber(n);
}