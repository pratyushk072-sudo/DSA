#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& arr, int target)
{
    int n = arr.size();

    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }

        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && arr[j] == arr[j - 1])
            {
                continue;
            }

            int left = j + 1;
            int right = n - 1;

            while (left < right)
            {
                long long sum =
                    (long long)arr[i] +
                    arr[j] +
                    arr[left] +
                    arr[right];

                if (sum < target)
                {
                    left++;
                }

                else if (sum > target)
                {
                    right--;
                }

                else
                {
                    ans.push_back(
                        {arr[i], arr[j], arr[left], arr[right]}
                    );

                    left++;
                    right--;

                    while (left < right &&
                           arr[left] == arr[left - 1])
                    {
                        left++;
                    }

                    while (left < right &&
                           arr[right] == arr[right + 1])
                    {
                        right--;
                    }
                }
            }
        }
    }

    return ans;
}

int main()
{
    int a;
    cout << "Enter the size of the array: ";
    cin >> a;

    int target;
    cout << "Enter thr target sum: ";
    cin >> target;

    vector<int> arr(a);
    cout << "ENter the elements of the array: ";
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> ans = fourSum(arr, target);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[ ";

        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}