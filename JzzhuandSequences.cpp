#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll calculate(ll f1,ll f2,ll n)
{
	if (n==0)
	{
		return 0;
	}
	if (n==1)
	{
		return f1;
	}
	else if(n==2)
	{
		return f2;
	} 

	ll fn = calculate(f1,f2,n-1) -calculate(f1,f2,n-2);
	return fn;    
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll f1,f2,n,ans;cin>>f1>>f2>>n;
     n=(n%6)+6;
    ans=calculate(f1,f2,n);

    ans= (ans)%( 1000000007 );
    if (ans<0)
    {
    	ans+=1000000007;
    }
    cout<<ans;
	return 0;
}