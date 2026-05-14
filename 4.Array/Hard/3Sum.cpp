#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Brute Force Method

    /*
    set<vector<int>> st;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == 0) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    */

    // Better Solution

    /*
    set<vector<int>> st;
    for(int i = 0; i < n; i++) {
        set<int> hash;
        for(int j = i + 1; j < n; j++) {
            int k = -(arr[i] + arr[j]);
            if(hash.find(k) != hash.end()) {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hash.insert(arr[j]);
        }
    }
    */

    // Optimal code

    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }

        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum < 0)
            {
                left++;
            }

            else if (sum > 0)
            {
                right--;
            }

            else
            {
                ans.push_back({arr[i], arr[left], arr[right]});

                left++;
                right--;

                while (left < right && arr[left] == arr[left - 1])
                {
                    left++;
                }

                while (left < right && arr[right] == arr[right + 1])
                {
                    right--;
                }
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "]";
    }
    cout << endl;
}
