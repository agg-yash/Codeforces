#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k,x,ans(0);
    cin>>n>>m>>k;

    bitset<32> arr[m+10];
		
    for (int i = 0; i < m+1; ++i)
    {
    	cin>>x;
    	arr[i]=x;
    }

    for (int i = 0; i < m; ++i)
    {
    	int k_diff=0;
    	for (int j = 0; j < 32; ++j)
    	{
    		if (arr[m][j]!=arr[i][j] )
    		{
    			k_diff++;
    		}
    	}

    	if (k_diff<=k)
    	{
    		ans++;
    	}


    }

    cout<<ans;
	return 0;
}