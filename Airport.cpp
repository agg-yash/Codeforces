#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr[m];

    for (int i = 0; i < m; ++i)
    {
    	cin>>arr[i];
    }
    sort(arr,arr+m);
    int minimum(0),num_min(arr[0]),k(0);
    for (int i = 0; i < n; ++i)
    {
    	minimum+= +num_min;
    	num_min-=1;
    	if (num_min==0)
    	{
    		num_min=arr[++k];
    	}
    }

    sort(arr,arr+m,greater<int>());

    int maximum(0);

    while(n--)
    {

    	maximum+=arr[0];
    	arr[0]-=1;
    	for (int i = 1; i < m; ++i)
    	{
    		if (arr[i]<=arr[i-1])
    		{
    			break;
    		}

    		 swap(arr[i], arr[i-1]);

    	}

    }


    cout << maximum << " " << minimum << endl;


	return 0;
}