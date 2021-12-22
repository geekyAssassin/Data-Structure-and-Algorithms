#include <bits/stdc++.h>
using namespace std;

void solve (vector<int> nums)
{
    int l=0,n=nums.size();
        int r = n-1,i,first=0;
        
        while(l<=r)
        {
            if(nums[l]==0)
                swap(nums[l++],nums[first++]);
            else if(nums[l]==2)
                swap(nums[l],nums[r--]);
            else
                l++;
        }
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
        solve(nums);     
    }
    return 0;
}