#include <bits/stdc++.h>
using namespace std;

bool feasible(vector<int> nums , int speed,int h)
{
    int sum=0,count=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+= ceil((double)nums[i]/speed);
    }
    return sum<=h;
}

int solve (vector<int> nums,int h)
{
    int max=0;
    for(int i : nums )
    {
        if(i>max)
        max=i;
    }
    int l=1,r=max,m;
    while(l<r)
    {
        m=l+(r-l)/2;
        if(feasible(nums,m,h))
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
        int n,a;
        cin>>n;
        vector<int> nums;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            nums.push_back(a);
        }
        int h;
        cin>>h;
        cout<<solve(nums,h);     
    }
    return 0;
}