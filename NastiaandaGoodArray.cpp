#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--)
    {
    	ll n,index,mini(INT_MAX);cin>>n;
    	ll arr[n];
    	for (ll i = 0; i < n; ++i)
    	{
    		cin>>arr[i];
    		mini=min(mini,arr[i]);
    	}
    	if (n==1)
    	{
    		cout<<"0"<<"\n";
    		continue;
    	}
    	

    	for (ll i = 0; i < n; ++i)
    	{
    		if (arr[i]==mini)
    		{
    			index=i;
    		}
    	}
    	ll j(1),k(1);

    	cout<<n-1<<"\n";
    	for (ll i = index+1; i <n; ++i)
    	{

    		arr[i]= mini+j;
    		j++;
    		cout<<index<<" "<<i<<" "<<mini<<" "<<arr[i]<<"\n";
    	}

         for (ll i = index-1; i>=0; --i)
    	{

    		arr[i]= mini+k;
    		k++;
    		cout<<index<<" "<<i<<" "<<mini<<" "<<arr[i]<<"\n";
    	}

    	

    }
	return 0;
}