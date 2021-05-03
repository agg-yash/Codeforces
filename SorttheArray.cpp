#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,low(0),high(0);
    cin>>n;
    ll arr[n+10];
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }
    ll start(-1), end(n);
    bool flag= true;

    for (int i = 0; i < n-1; ++i)
    {
    	if (flag)
    	{
 
    		if (arr[i]>arr[i+1])
    		{
    			flag=false;
    			start=i+1;
    		}

    	}

    	else
    	{
    		if (arr[i]<arr[i+1])
    		{
    			end=i+1 ;
    			break;
    		}
    	}
    }

    if (start!=-1)
    {
    	reverse(arr+start-1,arr+end);
    	for (int i = 0; i < n-1; ++i)
    	{
    		if (arr[i]>arr[i+1])
    		{
    			flag=false;
    			break;
    		}
    		else
    		{
    			flag=true;
    		}
    	}
    }


    if (flag)
    {
    	cout<<"yes"<<"\n";
    	if (start==-1)
    	{
    		cout<<"1 1\n";
    	}
    	else
    	{
    		cout<<start<<" "<<end<<"\n";
    	}
    }
    else
    {
    	cout<<"no\n";
    }

    return 0;
}