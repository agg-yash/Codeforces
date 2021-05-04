#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    bool flag=false;
    ll odd(0),even(0),last;
    for (int i = 0; i < s.length(); ++i)
    {
    	if (s[i]=='0' || s[i]=='2' || s[i]=='4' ||s[i]=='6' || s[i]=='8')
    	{
    		even ++;
    	}
    	else
    	{
    		odd++;
    	}
    }
    if (even==0)
    {
    	cout<<"-1";
    	return 0;
    }

     else if( even==1 )
    {
    	for (ll i = 0; i < s.length(); ++i)
    	{
    		if (s[i]=='0' || s[i]=='2' || s[i]=='4' ||s[i]=='6' || s[i]=='8')
    		{
    			swap(s[i],s[s.length()-1]);
    			break;
    		}
    	}
    	cout<<s;
    }


    else 
    {
    	last=s[s.length()-1];
    	for (ll i = 0; i < s.length(); ++i)
    	{
    		if (s[i]%2==0 && last>s[i])
    		{
    			swap(s[i],s[s.length()-1]);
    			flag=true;
    			break;
    		}
    		else
    		{
    			continue;
    		}

    	}
    	if (flag)
    	{
    		cout<<s;
    	}
    	else
    	{
    		for (ll i = s.length()-2; i >=0; --i)
    		{
    			if (s[i]%2==0)
    			{
    				swap(s[i],s[s.length()-1]);
    				break;
    			}
    		}
    		cout<<s;
    	}


    }
	return 0;
}