#include <bits/stdc++.h>
using namespace std;

int solve (vector<int> nums)
{
    int count =1 , major = nums[0];
    for(int i=1;i<nums.size();i++)
    {
        if(count == 0)
        {
            count++;
            major = nums[i];
        }
        else if(major == nums[i])
        count++;
        else
        count--;
    }
    return major;
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