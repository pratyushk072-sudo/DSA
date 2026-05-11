#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;

    cout << "Enter the size of the array and the target sum: ";
    cin >> n >> k;

    vector<int> nums(n);

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    unordered_map<int, int> prefixSumCount;

    int count = 0;
    int sum = 0;

    prefixSumCount[0] = 1;

    for (int i = 0; i < n; i++)
    {
        sum = sum + nums[i];

        int rem = sum - k;

        if (prefixSumCount.find(rem) != prefixSumCount.end())
        {
            count += prefixSumCount[rem];
        }

        prefixSumCount[sum]++;
    }

    cout << "Number of subarrays = " << count;

    return 0;
}