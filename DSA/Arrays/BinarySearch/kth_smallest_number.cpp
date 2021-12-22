#include <bits/stdc++.h>
#include<math.h>
using namespace std;

bool feasible(int m,int n,int k,int value)
{
    int count=0;
    for(int i=1;i<=m;i++)
    count+=min(value/i,n);

    return count>=k;
}

int solve (int m,int n,int k)
{
    int l=1,r=m*n,mid;
    while(l<r)
    {
        mid=l+(r-l)/2;
        if(feasible(m,n,k,mid))
        r=mid;
        else
        l=mid+1;
    }
    return l;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        // int n,a;
        // cin>>n;
        // vector<int> nums;
        // for(int i=0;i<n;i++)
        // {
        //     cin>>a;
        //     nums.push_back(a);
        // }
        int m,n,k;
        cin>>m,n,k;

        cout<<solve(m,n,k)<<endl;     
    }
    return 0;
}