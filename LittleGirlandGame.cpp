#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int odd(0);
    int count[26]={0};
    for (int i = 0; i < s.length(); ++i)
    {
    	count[s[i]-'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
    	if (count[i]%2!=0)
    	{
    		odd++;
    	}
    }

    if (odd==0 || odd==1)
    {
    	cout<<"First";
    	return 0;
    }

    if (odd%2==0)
    {
    	cout<<"Second";
    	return 0;
    }

    cout<<"First";
	return 0;
}