#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2,s3;
    int n,counta(1),countb(0);
    cin>>n;
    cin>>s1;

    s2=s1;

    for (int i = 2; i <=n ; ++i)
    {
    	cin>>s1;
    	if (s2==s1)
    	{
    		counta++;
    	}

    	else if (s2!=s1)
    	{
    		countb++;
    		s3=s1;
    	}
    }

    if (counta>countb)
    {
    	cout<<s2;
    }

    else
    {
    	cout<<s3;
    } 

	return 0;
}