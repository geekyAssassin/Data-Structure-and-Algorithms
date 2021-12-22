#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> nums)
{

    int l = 0, r = nums.size() - 1, mid;
    while (l < r)
    {
        mid = l + (r - l) / 2;
        if (nums[mid] < nums[r])
            r = mid;
        else if (nums[mid] > nums[r])
            l = mid + 1;
        else
            r--; //for cases [4,4,4,1,4]
    }
    return nums[l];
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
        cout << solve(nums) << endl;
    }
    return 0;
}