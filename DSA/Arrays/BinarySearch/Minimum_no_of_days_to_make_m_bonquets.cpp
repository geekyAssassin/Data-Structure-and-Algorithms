#include <bits/stdc++.h>
using namespace std;

bool feasible(int present_day, vector<int> nums, int required_bonquets, int required_flowers)
{
    int bonquets = 0, flowers = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] <= present_day)
        {
            flowers += 1;
            if (flowers == required_flowers)
            {
                bonquets++;
                flowers = 0;
            }
        }
        else
        {
            flowers = 0;
        }
    }
    return bonquets >= required_bonquets;
}

int solve(vector<int> nums, int m, int k)
{
    if (m * k > nums.size())
        return -1;
    int l = 1, r = *max_element(nums.begin(), nums.end());
    int mid;
    while (l < r)
    {
        mid = l + (r - l) / 2;
        if (feasible(mid, nums, m, k))
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
        int m, k;
        cin >> m >> k;
        cout << solve(nums, m, k);
    }
    return 0;
}