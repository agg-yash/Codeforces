#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool issquare(ll x)
{
	ll y = sqrt(x);
	if (y*y==x)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isPrime(ll n)
{
    int skip=0;
    if(n<2)
        return false;
    else if(n==2){
        return true;
    }
    ll limit=sqrt(n);
    if(n%2==0){
        return false;
    }
        for(int j=3; j<=limit; j+=2){
            if(n%j==0){
                return false;
            }
            }
    return true;
}


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    
    cin>>n;
   	ll arr[n];
   	for (ll i = 0; i <n; ++i)
   	{
   		cin>>arr[i];
   	}

   	for (ll i = 0; i < n; ++i)
   	{
   		
   		if ( issquare(arr[i]) && isPrime(sqrt(arr[i])) )
   			{
   				cout<<"YES\n";

   			}

   			else
   			{
   				cout<<"NO\n";
   			}

   	}





return  0;
}