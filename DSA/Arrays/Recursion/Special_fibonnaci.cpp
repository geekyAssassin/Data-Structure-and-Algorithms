#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int a,b,n;
	    cin>>a>>b>>n;
	    
	    if(n%3==0)
	    cout<<a<<endl;
	    else if(n%3==1)
	    cout<<b<<endl;
	    else
	    {
	        long long res = a^b;
	         cout<<res<<endl;
	    }
	}
	return 0;
}
