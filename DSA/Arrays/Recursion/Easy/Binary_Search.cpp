#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> nums, int s, int e, int num)
{
    if (s < e)
    {
        int m = (s + e) / 2;
        if (nums[m] == num)
            return m;
        else if (nums[m] > num)
            return solve(nums, s, m - 1, num);
        else if (nums[m] < num)
            return solve(nums, m + 1, e, num);
    }
    return -1;
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
        int num;
        cin >> num;
        cout << solve(nums, 0, n - 1, num) << endl;
    }
    return 0;
}