#include <bits/stdc++.h>
using namespace std;

int solve (vector<int> nums,int target)
{
    int l=0,r=nums.size()-1,m;
    while(l<=r)
    {
        m=l+(r-l)/2;
        if(nums[m]==target)
        return m;
        else if(nums[l]<=nums[m])
        {
            if(nums[l]<=target && nums[m]>=target)
            r=m-1;
            else
            l=m+1;
        }
        else
        {
            if(nums[m]<=target && nums[r]>=target)
            l=m+1;
            else
            r=m-1;
        }

    }
    return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,target;
        cin>>n;
        vector<int> nums;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            nums.push_back(a);
        }
        cin>>target;
        cout<<solve(nums,target)<<endl;     
    }
    return 0;
}