#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    ll ans=-1;

    if (sx==ex && sy==ey)

    {
    	cout<<0;
    	return  0;
    }

    for (int i = 0; i < s.length(); ++i)
    {
    	if (s[i]=='E' && ex>sx)
    	{
    		sx++;
    	}

    	if (s[i]=='W' && ex<sx)
    	{
    		sx--;
    	}

    	if (s[i]=='N' && ey>sy)
    	{
    		sy++;
    	}

    	if (s[i]=='S' && ey<sy)
    	{
    		sy--;
    	}

    	if (sx==ex && sy==ey)
    	{
    		ans=i+1;
    		break;
    	}
    }


    cout<<ans;






	return 0;
}