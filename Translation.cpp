	#include <bits/stdc++.h>
	using namespace std;
	int main()
	{
		ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	    string s,t;
	    cin>>s>>t;
	    int len= s.length();
	    for (int i = 0; i < len; ++i)
	    {
	    	if (s[i]==t[len-1-i])
	    	{
	    		continue;
	    	}

	    	else
	    	{
	 	   		cout<<"NO";
	 	   		return 0;
	    	}
	    }

	    cout<<"YES";

		return 0;
	}