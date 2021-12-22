#include <bits/stdc++.h>
using namespace std;

int solve (vector<int> nums)
{
    int l=0,r=nums.size()-1,m;
    while(l<r)
    {
        m=l+(r-l)/2;
        if(nums[m]>nums[m+1])
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
        cout<<solve(nums)<<endl;     
    }
    return 0;
}