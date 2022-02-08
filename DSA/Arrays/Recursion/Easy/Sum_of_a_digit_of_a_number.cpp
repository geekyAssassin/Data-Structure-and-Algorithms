#include <bits/stdc++.h>
using namespace std;

int solve (int n,int s)
{
    if(n==0)
    return s;

    int d = n%10;
    s=s+d;
    int result = solve(n/10,s);
    return result;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        // vector<int> nums;
        // for(int i=0;i<n;i++)
        // {
        //     cin>>a;
        //     nums.push_back(a);
        // }
        int sum = 0;
        cout<<solve(n,sum)<<endl;     
    }
    return 0;
}