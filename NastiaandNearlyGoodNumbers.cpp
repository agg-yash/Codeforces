#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	ll a,b;cin>>a>>b;
    	if (b==1)
    	{
    		cout<<"NO\n";
    		continue;

    	}
    	if (b==2)
    	{
    		cout<<"YES\n";
    		cout<<a<<" "<<3*a<<" "<<2*a*b<<"\n";
    		continue;
    	}
    	else
    	{
    		cout<<"YES\n";
    		cout<<a<<" "<<(b-1)*a<<" "<<a*b<<"\n";
    		continue;
    	}	

    }
	return 0;
}