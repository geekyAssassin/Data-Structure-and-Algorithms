#include <bits/stdc++.h>
using namespace std;

void solve (vector<int> nums ,int n)
{
    if(n==0)
    return ;

    vector<int>sum(n-1);
    for(int i=0;i<n-1;i++)
    {
        sum[i]=nums[i]+nums[i+1];
    }
    solve(sum,n-1);
    for(int i=0;i<n;i++)
    cout<<nums[i]<<" ";
    cout<<endl;

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
        solve(nums,n);     
    }
    return 0;
}