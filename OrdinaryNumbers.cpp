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
    	ll n;cin>>n;
    	ll total(0);
    	for (int digits = 1; digits <=9; ++digits)
    	{
    		int x=0;
    		for (int j = 1; j <=10; ++j)
    		{
    			x= x*10+digits;
    			if (x<=n)
    			{
    				total++;
    			}
    			else
    			{
    				break;
    			}
    		}
    	}
    	cout<<total<<"\n";
    }
	return 0;
}