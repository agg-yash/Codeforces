#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()

{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    map <string,string > mp;

    for (int i = 0; i < m; ++i)
     {
     	string x,y;
     	cin>>x>>y;
     	if (x.length()>y.length())
     	{
     		mp[x]=y;
     	}
     	else
     	{
     		mp[x]=x;
     	}
     } 

     for (int i = 0; i < n; ++i)
     {
     	string s;
     	cin>>s;
     	cout<<mp[s]<<" ";
     }
cout<<"\n";

	return 0;
}