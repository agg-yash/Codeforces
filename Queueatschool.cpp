#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    cin.ignore();
    string s;
    cin>>s;
    while(t--)
    {
    for (int i = 0; i < n-1; ++i)
    {
    	if (s[i]=='B' && s[i+1]=='G')
    	{
    		swap(s[i],s[i+1]);
    		i++;
    	}
    }
}

cout<<s;
	return 0;
}