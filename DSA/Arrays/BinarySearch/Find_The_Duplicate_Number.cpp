#include <bits/stdc++.h>
using namespace std;

int solve (vector<int> nums)
{
    int l=1,r=nums.size()-1;
    int m;
    while(l<=r)
    {
        int count=0;
        m=l+(r-l)/2;
        for(int x : nums)
        {
            if(x<=m)
            count++;
        }
        if(count<=m)
        l=m+1;
        else
        r=m-1;        
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

// O(n) Solution

// int tortoise = nums[0];
//          int hare = nums[0];
//          do {
//               tortoise = nums[tortoise];
//               hare = nums[nums[hare]];
//              } while (tortoise != hare);
        
//          tortoise = nums[0];
        
//          while (tortoise != hare)
//          {
//              tortoise = nums[tortoise];
//              hare = nums[hare];
//          }
//          return hare;