#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll arr[n];
  
    for (ll i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }
      ll time(n+arr[0]);
    for (ll i = 0; i < n-1; ++i)
    {
    	if (arr[i]==arr[i+1])
    	{
    		time+=1;
    	}
    	else if(arr[i]>arr[i+1])
    	{
    		time+= arr[i]-arr[i+1]+1;
    	}
    	else
    	{
    		time+=arr[i+1]-arr[i]+1;
    	}
    }
    cout<<time;
	return 	0;
}