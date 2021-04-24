#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i(0),sum(0),c,total;
    cin>>n;
    int arr[7];
    total=n;


    for ( i = 0; i < 7; ++i)
    {
    	cin>>arr[i];

    }

    i=0;
    sum=arr[0];

    while(true)

    {
    	if (sum>=total)
    		{
    			break;
    		}	


    	i=(i+1)%7;
    	sum+=arr[i];

    }
    cout<<i+1;

	return 0;
}