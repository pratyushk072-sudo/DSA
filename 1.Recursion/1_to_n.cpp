#include<bits/stdc++.h>
using namespace std;

void printnumber(int n) {
    if(n == 0) {
        return;
    }

    printnumber(n-1);

    cout << n << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << "The numbers are: " << endl;

    printnumber(n);

}