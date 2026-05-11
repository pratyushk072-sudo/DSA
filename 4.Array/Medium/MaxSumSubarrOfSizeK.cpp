#include <bits/stdc++.h>
using namespace std;

long long maximumSubarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    
    long long sum = 0;
    long long maxSum = 0;
    
    int left = 0;

    for(int right = 0; right < nums.size(); right++) {
        sum += nums[right];
        mp[nums[right]]++;

        while(mp[nums[right]] > 1 || (right - left + 1) > k) {
            mp[nums[left]]--;
            sum -= nums[left];
            if(mp[nums[left]] == 0) {
                mp.erase(nums[left]);
            }
            left++;
        }

        if((right - left + 1) == k) {
            maxSum = max(maxSum, sum);
        }
    }

    return maxSum;
}

int main() {
    vector<int> nums = {1, 5, 4, 2, 9, 9, 9};
    int k = 3;

    long long result = maximumSubarraySum(nums, k);

    cout << "Maximum Sum: " << result << endl;

    return 0;
}