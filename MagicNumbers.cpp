#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int countz(0),counto(0);
    string s;
    cin>>s;


    	if (s[0]!='1')
    	{
    		cout<<"NO";
    		return 0;
    	}

    	for (int i = 0; i < s.length();)
    	{

    		if (s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
    		{
    			i+=3;
    		}

    		else if (s[i]=='1' && s[i+1]=='4')
    		{
    			i+=2;
    		}

    		else if(s[i]=='1')
    		{
    			i++;
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