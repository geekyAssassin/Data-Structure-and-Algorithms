#include <bits/stdc++.h>
using namespace std;

int solve(int n, int index, int maxSum)
{
    int l = index, r = n - index - 1; // to calculate the spaces before and after the index

    long low = 1, high = maxSum, mid;
    long res = 0;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        long ls = 0, rs = 0, sum = mid;

        long m = mid - 1;

        if (r <= m)
            rs = (m * (m + 1) / 2) - ((m - r) * (m - r + 1)) / 2;
        else
            rs = (m * (m + 1) / 2) + 1 * (r - m);

        if (l <= m)
            ls = (m * (m + 1) / 2) - ((m - l) * (m - l + 1)) / 2;
        else
            ls = (m * (m + 1) / 2) + 1 * (l - m);

        sum += ls + rs;

        if (sum <= maxSum)
        {
            res = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int n, a;
        // cin >> n;
        // vector<int> nums;
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> a;
        //     nums.push_back(a);
        // }
        int index, maxSum,n;
        cin >> n >>index >> maxSum;
        solve(n, index, maxSum);
    }
    return 0;
}