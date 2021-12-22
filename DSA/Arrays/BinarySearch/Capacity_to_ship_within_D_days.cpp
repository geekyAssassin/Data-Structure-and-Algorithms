#include <bits/stdc++.h>
using namespace std;

bool feasible(vector<int> nums , int target,int d)
{
    int total=0;
    int days=1;
    for(int i=0;i<nums.size();i++)
    {
        total+=nums[i];
        if(total> target)
        {
            total = nums[i];
            days+=1;
            if(days > d)
            return false;
        }
    }
    return true;

}

int solve (vector<int> nums,int d)
{
    int max=nums[0],sum=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]>max)
        max=nums[i];

        sum+=nums[i];

    }
    int l=max,r=sum;
    int m ;
    while(l<r)
    {
        m=l+(r-l)/2;
        if(feasible(nums,m,d))
        r=m;
        else
        l=m+1;
    }
    return l;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,d;
        cin>>n;
        vector<int> nums;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            nums.push_back(a);
        }
        cin>>d;
        cout<<solve(nums,d)<<endl;     
    }
    return 0;
}