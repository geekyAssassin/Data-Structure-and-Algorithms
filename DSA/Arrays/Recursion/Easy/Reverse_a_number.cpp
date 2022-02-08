#include <bits/stdc++.h>
using namespace std;

int solve (int n ,int s)
{
    if(n==0)
    return s;

    int d = n%10;
    s = s*10 + d;
    int res = solve(n/10,s);
    return res;

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
        int n ;
        cin>>n;
        cout<<solve(n,0)<<endl;     
    }
    return 0;
}