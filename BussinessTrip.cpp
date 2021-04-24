#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,i,sum(0),flag(0);
    int arr[12];
    cin>>k;
    
    if(k==0)
    {
    	cout<<"0";
    	return 0;
    }


    for (int i = 0; i < 12; ++i)
    {
    	cin>>arr[i];
    }

    sort(arr,arr+12);
    reverse(arr,arr+12);

    for ( i = 0; i < 12; ++i)
    {
    	sum+=arr[i];
    	if (sum>=k)
    	{
    		flag=1;
    		break;
    	}


    }
    if (flag==1)
    {
    	cout<<i+1;/* code */
    }
    
    else
    {
    	cout<<"-1";
    }	



	return 0;
}