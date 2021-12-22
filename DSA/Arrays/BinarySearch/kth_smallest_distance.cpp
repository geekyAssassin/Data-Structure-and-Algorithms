#include <bits/stdc++.h>
using namespace std;

bool feasible(vector<int> nums, int distance, int k, int n)
{
    int total = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < n && nums[j] - nums[i] <= distance)
            j++;

        total += j - i - 1;
    }
    return total >= k;
}

int solve(vector<int> nums, int k)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int l = 0, r = nums[n - 1] - nums[0], mid;

    while (l < r)
    {

        mid = l + (r - l) / 2;
        if (feasible(nums, mid, k, n))
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            nums.push_back(a);
        }
        int k;
        cin >> k;
        cout << solve(nums, k) << endl;
    }
    return 0;
}