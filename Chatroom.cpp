#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,s1;
    cin>>s;
    s1="hello";
    int j(0),cnt(0);
    for (int i = 0; i < s.length(); ++i)
    {
    	if (s[i]==s1[j])
    	{
    		j++;
    		cnt++;
    	}

    	if (cnt==5)
    	{
    		break;
    	}
    }

    if (cnt==5)
    {
    	cout<<"YES";
    }
    else
    {
    	cout<<"NO";
    }













    if (flag)
    {
    	cout<<"YES";
    }

    else
    {
    	cout<<"NO";
    }
	return 0;
}