#include <bits/stdc++.h>
using namespace std;

int maximum(vector<int> nums ,int n)
{
    if(n==1)
    return nums[0];

    return max(nums[n-1],maximum(nums,n-1));
}

int minimum(vector<int> nums,int n)
{

    if(n==1)
    return nums[0];

    return min(nums[n-1],minimum(nums,n-1));
}

void solve (vector<int> nums)
{
    int n = nums.size();
    cout<<maximum(nums,n)<<endl;
    cout<<minimum(nums,n)<<endl;
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