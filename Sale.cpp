#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	
    int n,m,earn(0);
    cin>>n>>m;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }

    sort(arr,arr+n);

    for (int i = 0; i < m; ++i)
    {
    	if (arr[i]<0)
    	{
    		earn+=arr[i];
    	}
    	
    }


cout<<abs(earn);


	return 0;
}