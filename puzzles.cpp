#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,min_diff(1000);
    cin>>n>>m;
    int arr[m];
    for (int i = 0; i < m; ++i)
    {
    	cin>>arr[i];
    }



    sort(arr,arr+m);
    for (int i = 0; i <= m-n; ++i)
    {
    	if (arr[i+n-1]-arr[i]<min_diff)
    	{
    		min_diff=arr[i+n-1]-arr[i];
    	}

    }


    cout<<min_diff;


	return 0;
}