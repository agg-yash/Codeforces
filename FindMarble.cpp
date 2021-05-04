#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool flag=true;
    ll n,s,t,x,pos,cnt(0);
    cin>>n>>s>>t;
    map<ll,ll> mp;
    for (ll i = 0; i < n; ++i)
    {
    	cin>>x;
    	mp[i+1]=x;
    }

if (s==t)
{
	cout<<"0";
	return 0;
}
    pos=s;

do
{
	pos=mp[pos];
	cnt++;
	if (pos==s)
	{
		flag=false;
		break;
	}


}while(pos!=t);

	if (flag)
	{
		cout<<cnt;
	}
	else
	{
		cout<<"-1";
	}
	return 0;
}