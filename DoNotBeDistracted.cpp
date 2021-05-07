#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {	
    	int n;
    	cin>>n;
    	string s;

    	cin>>s;
    	string sorted=s;
    	sort(sorted.begin(),sorted.end());
    	sorted.erase(unique(sorted.begin(),sorted.end()),sorted.end());
    	s.erase(unique(s.begin(),s.end()),s.end());
    	if (sorted.size()==s.size())
    	{
    		cout<<"YES\n";
    	}
    	else
    	{
    		cout<<"NO\n";
    	}

    }
	return 0;
}