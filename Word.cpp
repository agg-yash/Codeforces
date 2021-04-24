#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int u(0),l(0);
    for (int i = 0; i < s.length(); ++i)
    {
    	if (int(s[i])>=97)
    	{
    		l++;
    	}
    	else
    	{
    		u++;
    	}
    }


for (int i = 0; i < s.length(); ++i)
{
	if (u>l)
	{
		if (int(s[i])>=97)
		{
			s[i]=s[i]-32;
		}
	}

	if (u<=l)
	{
		if (int(s[i])<97)
		{
			s[i]=s[i]+32;
		}
	}
}



cout<<s;


	return 0;
}