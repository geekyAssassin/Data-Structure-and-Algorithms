#include <bits/stdc++.h>
using namespace std;

int solve (vector<int> nums,int target)
{
    sort(nums.begin(),nums.end());
        int min_diff = INT_MAX,l,r,i,n=nums.size(),res=0;
        
        for(int i=0;i<n-1;i++)
        {
            l=i+1;
            r=n-1;
            while(l<r)
            {
                int s = nums[l]+nums[i]+nums[r];
                if(abs(s-target) < min_diff)
                {
                    min_diff = abs(s-target); 
                    res=s;
                }
                if(s> target)
                    r--;
                else
                    l++;
            }
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
        cout<<solve(nums,target)<<endl;     
    }
    return 0;
}