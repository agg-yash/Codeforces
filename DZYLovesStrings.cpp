#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int k,mx=-1;
    char chr;
    cin>>k;
    int x,ans(0);
    
    map<char,int> mp;
    for (int i = 0; i < 26; ++i)
    {
    	cin>>x;
    	mp['a'+i]=x; 
    	mx=max(mx,x);	
    }	
    map<char,int> ::iterator it;

    for (it = mp.begin(); it!= mp.end(); ++it) //Bruhh shouln't have made it complicated uffh
    {
    	if (it->second==mx)
    	{
    		chr=it->first;
    		break;
    	}
    }
    s.append(k,chr);
    
    for (int i = 0; i < s.length(); ++i)
    {
    	ans+=(i+1)*mp[s[i]];
    }
    cout<<ans;

	return 0;
}	