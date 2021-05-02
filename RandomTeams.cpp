#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,max,max_pairs,min,min_pairs,mn;
    cin>>n>>m;
    max= n+1-m;
    max_pairs= ((max)*(max-1))/2;


    ll rem= n%m;
    ll num= n/m;

    min= (m-rem)* ( ((num)*(num-1)) /2 );
    num+=1;
     mn= rem*( ((num)*(num-1)) /2 );
    min_pairs= min+mn;
    

    cout<<min_pairs<<" "<<max_pairs;
	return 0;
}