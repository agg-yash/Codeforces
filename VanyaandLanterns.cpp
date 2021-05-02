#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	ll n,l;
   	cin>>n>>l;
   	double arr[n];
   	for (int i = 0; i < n; ++i)
   	{
   		cin>>arr[i];
   	}

   	sort(arr,arr+n);
   	double ans=0;
   	//CASE 1
   	ans= max(ans, arr[0]);
   	//CASE 2
   	ans= max(ans, l-arr[n-1]);


   	//CASE 3
   	for (int i = 0; i < n-1; ++i)
   	{
   		ans=max( (arr[i+1]-arr[i])/2, ans );
   	}

   	cout<<fixed<<setprecision(9)<<ans;


	return 0;
}