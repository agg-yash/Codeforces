#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s[4];
    int count=0;

    for (int i = 0; i < 4; ++i)
    {
    	cin>>s[i];
    }

    sort(s,s+4);

    for (int i = 0; i < 3; ++i)
    {
    	if (s[i]==s[i+1])
    	{
    		count++;
    	}
    }

    cout<<count;

	return 0;
}