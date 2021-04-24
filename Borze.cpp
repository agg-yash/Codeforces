#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int x[300];
    cin>>s;
    int j=0;
    for (int i = 0; i < s.length(); ++i)
    {
    	if (s[i]=='-' && s[i+1]=='.')
    	{
    		x[j]=1;
    		j++;
    		i++;
    		continue;

    	}


    	if (s[i]=='.')
    	{
    		x[j]=0;
    		j++;
    		continue;
    	}

    	if (s[i]=='-' && s[i+1]=='-')
    	{
    		x[j]=2;
    		i++;
    		j++;
    		continue;
    	}
    }

    for (int i = 0; i <j; ++i)
    {
    	cout<<x[i];
    }
	return 0;
}