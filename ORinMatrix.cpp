#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    int n, m;
    cin >> m >> n;
    int arr[m][n], ans[m][n], trans[m][n];
    for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		cin >> arr[i][j];
    		ans[i][j] = 1;
    		trans[i][j] = 0;
    	}
    }
    
    for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		if (arr[i][j] == 0)
    		{
    			for (int k = 0; k < n; ++k)
    			{
    				ans[i][k] = 0;
    			}
    			for (int k = 0; k < m; ++k)
    			{
    				ans[k][j] = 0;
    			}

    		}
    	}
    }
    
    for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		if (ans[i][j]==1 )
    		{
    			for (int k = 0; k < n; ++k)
    			{
    				trans[i][k] = 1;
    			}
    			for (int k = 0; k < m; ++k)
    			{
    				trans[k][j] = 1;
    			}

    		}
    	}
    }

     for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		if (trans[i][j] != arr[i][j])
    		{
    			cout <<"NO\n";
    			return 0;
    		}
    	}
    }

    cout <<"YES\n";
    for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		cout << ans[i][j] <<" ";
    	}
    	cout << "\n";
    }


    return 0;
}
