#include <bits/stdc++.h>
using namespace std;

bool feasible(vector<int> nums, int threshold, int m)
{
    int count = 1, sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum > threshold)
        {
            sum = nums[i];
            count++;

            if (count > m)
                return false;
        }
    }
    return true;
}

int solve(vector<int> &nums, int m)
{
    int l = *max_element(nums.begin(), nums.end()), r, mid;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
        sum += nums[i];

    r = sum;
    while (l < r)
    {
        mid = l + (r - l) / 2;
        if (feasible(nums, mid, m))
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
        int m;
        cin >> m;
        cout << solve(nums, m) << endl;
    }
    return 0;
}