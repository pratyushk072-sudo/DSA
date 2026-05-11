#include <iostream>
#include <vector>
using namespace std;

// brute force method
/*
int main() {
    vector<int> arr = {1,2,3,6,7,8,11,13,14,16,18,20,21,22,25,26,27,28,30};
    int k;
    cout << "Enter the number to check whether it's missing or not: ";
    cin >> k;

    for(int i = 0; i < arr.size(); i++) {
        if(k == arr[i]) {
            cout << "The given number is not missing.";
            break;
        } else {
            cout << "The number is missing.";
            break;
        }
    }
}
*/

// Better Option
/*
int main()
{
    vector<int> arr = {1, 2, 3, 6, 7, 8, 11, 13, 14, 16, 18, 20, 21, 22, 25, 26, 27, 28, 30};
    int k;
    cout << "Enter the number to check whether it's missing or not: ";
    cin >> k;

    int max = 100;
    vector<int> hash(max + 1, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]] == 1;
    }

    if (hash[k] = 1)
    {
        cout << "The number is not missing";
    }
    else
    {
        cout << "The number is missing";
    }
}
*/

// Otimised Method(Sum)
//  works only when one number is missing.

int main()
{
    vector<int> arr = {1, 2, 3, 4, 6}; // missing 5

    int n = 6; // total numbers from 1 to n

    int totalSum = n * (n + 1) / 2;

    int arrSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        arrSum += arr[i];
    }

    int missing = totalSum - arrSum;

    cout << "Missing number is: " << missing;
}