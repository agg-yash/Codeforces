#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define ps(x,y)         fixed<<setprecision(y)<<x
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
	uniform_int_distribution<int> uid(0, lim - 1);
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

	int n, m, ans(0), count(0);
	cin >> n >> m;
	map<int, int> fr;
	int x, y;
	int b[101][101] = {0};
	int c[101] = {0};
	fo(i, m)
	{
		cin >> x >> y;
		fr[x]++;
		fr[y]++;
		b[x][y] = 1;
		b[y][x] = 1;
	}


	do
	{
		count = 0;
		for (int i = 1; i <= n; i++)
		{
			if (fr[i] == 1)
			{
				c[count] = i;
				count++;
				fr[i]--;
			}
		}

		for (int i = 0; i < count; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				if (b[c[i]][j])
				{
					fr[j]--;
				}
			}
		}

		if (count > 0)
		{
			ans++;
		}
		else
		{
			break;
		}

	} while (true);

	cout << ans ;

}

int main() {

	c_p_c();

	int t = 1;

	while (t--) {
		solve();
	}

	return 0;
}




