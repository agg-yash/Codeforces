#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,m,time(0);
	cin>>n>>m;
	long long int arr[100001];
	for (long long int i = 0; i <m; ++i)
	{
			cin>>arr[i];	
	}

long long int j=0,position(1);

	while(j<m)
	{
		if (arr[j]>position)
		{
			time += (arr[j]-position); 
			position=arr[j];
			j++;
		}

		else if (arr[j]<position)
		{
			time+= ((n-position)+arr[j]);
			position=arr[j];
			j++;
		}

		else if (arr[j]==position)
		{
			j++;
		}
		
	}

	cout<<time;


	return 0;

}