#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int a;
    cout << "Enter the size of the array: ";
    cin >> a;

    vector<int> arr(a);
    cout << "Enter the elements of tht array: ";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    int maxi = INT_MIN;
    int sum = 0;
    int start = 0;
    int ansStart = 0, ansEnd = 0;

    for (int i = 0; i < a; i++)
    {

        if (sum == 0)
        {
            start = i;
        }
        sum += arr[i];

        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << "The max sum of the array is: " << maxi << endl;
    cout << "The subarray are: ";

    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}