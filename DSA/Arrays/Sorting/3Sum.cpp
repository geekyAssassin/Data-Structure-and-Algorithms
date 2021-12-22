#include <bits/stdc++.h>
using namespace std;

vector<int> solve (vector<int> nums,int target)
{
    vector<int> res;
    int n = nums.size();

    int l,r,i;
    for(int i=0;i<n-1;i++)
    {
        l=i+1;
        r=n-1;

        while(l<r)
        {
            if(nums[l]+nums[i]+nums[r] < target)
            l++;

            else if(nums[l]+nums[i]+nums[r] > target)
            r--;

            else
            {
                res.push_back(nums[l]);
                res.push_back(nums[i]);
                res.push_back(nums[r]);

                while(l<r && nums[l]==nums[l+1])
                l++;

                while(l<r && nums[r]==nums[r-1])
                r--;
            }
        }
        while(i+1 < n && nums[i]==nums[i+1])
        i++;
    }
    return res;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int> nums;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            nums.push_back(a);
        }
        int target;
        cin>>target;
        vector<int> res = solve(nums,target);     
    }
    return 0;
}