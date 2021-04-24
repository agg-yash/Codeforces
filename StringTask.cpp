#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,s2;
    cin>>s;

    int j(0);
    for (int i = 0; i < s.length(); ++i)
    {
    	if (s[i]<97)
    	{
    		s[i]=s[i]+32;
    	}

    	if (s[i]!='a' && s[i]!= 'o' && s[i]!= 'y' && s[i]!= 'e' && s[i]!='i' && s[i]!='u' )
    	{
    		s2+='.';
    		s2+=s[i];
    		
    	}

    }


    
    for (int i = 0; i < s2.length(); ++i)
    {

    	cout<<s2[i];

    }


    


	return 0;
}