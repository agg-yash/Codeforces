#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2,s3;

    cin>>s1;


    cin>>s2;

    s3=s1;
    for (int i = 0; i < s1.length(); ++i)
    {
    	if (s1[i]!=s2[i])
    	{
    		s3[i]='1';
    	}
    	else
    	{
    		s3[i]='0';
    	}
    }


    cout<<s3;

	return 0;
}