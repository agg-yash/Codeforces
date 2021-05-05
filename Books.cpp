#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t,ans(0),sum(0);
    cin>>n>>t;
    ll arr[n+10];
    for (ll i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }
    
    ll  left = 0;
    for(ll right = 0; right < n; right++)
    {
        sum += arr[right];
 
        while(sum > t)
        {
            sum -= arr[left];
            left++;
        }
 
        ans = max(ans, right - left + 1);
    }
    
    cout<<ans;
	return 0;
}