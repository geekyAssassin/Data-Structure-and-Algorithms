#include <bits/stdc++.h>
using namespace std;

bool solve (vector<int> nums)
{
    sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n-1;i++)
            if(nums[i]==nums[i+1])
                return true;
        return false;
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