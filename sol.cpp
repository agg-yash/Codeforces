#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define ps(x,y)         fixed<<setprecision(y)<<x
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod             1000000007
#define inf             1e18
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}




//=======================

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}




void solve() {

  int i,j;
  ll n,k,mini(inf), maxi(-1);cin>>n>>k;
  ll arr[n];
  fo(i,n)
  {
  	cin>>arr[i];
  	mini=min(mini,arr[i]);
  	maxi= max(maxi, arr[i]); 
  }

  if (maxi-mini-1>k-1)
  {
  	cout<<"NO\n";
  	return ;
  }
else
{
	cout<<"YES\n";
	for ( i = 0; i <n; ++i)
	{
		int x=1;
		for ( j = 1; j <=arr[i]; ++j)
		{
			if (j<=mini+1)
			{
				cout<<"1"<<" ";
			}
			else
			{
				x++;
				cout<<x<<" ";
			}
		}
		cout<<"\n";

	}
}
  
  

}

int main() {
  
   c_p_c();

    int t = 1;
   
    while(t--) {
      solve();
    }

    return 0;
}




