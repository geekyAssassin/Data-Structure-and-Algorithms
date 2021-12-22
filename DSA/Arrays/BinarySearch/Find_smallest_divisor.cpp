#include <bits/stdc++.h>
using namespace std;

bool feasible(vector<int> nums, int divisor, int threshold)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += ceil((double)nums[i] / divisor);
    }
    return sum <= threshold;
}
int solve(vector<int> &nums, int threshold)
{
    int l = 1, r = 1000000, m;
    while (l < r)
    {
        m = l + (r - l) / 2;
        if (feasible(nums, m, threshold))
            r = m;
        else
            l = m + 1;
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
        int h;
        cin >> h;
        cout << solve(nums, h);
    }
    return 0;
}