#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,s1;
    cin>>s;
    int len=s.length(),flag=1;

    for (int i = 0; i < len;)
    {
    	 if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
	        
	        i+=3;

	        if (!flag)
	        {
	        	cout<<" ";
	        }

	    }


	    else
	    {
	    	flag=0;
	    	cout<<s[i];
	    	i++;
	    }

    }







	return 0;
}