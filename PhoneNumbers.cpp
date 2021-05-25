#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
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



bool istaxi(string s)
{
	char key = s[0];
	for (int i = 1; i < 8; ++i)
	{
		if (i == 2 || i == 5)
		{
			continue;
		}

		if (key != s[i])
		{
			return false;
		}
	}

	return true;
}

bool ispizza(string s)
{
	char key = s[0];

	for (int i = 1; i < 8; ++i)
	{
		if (i == 5 || i == 2)
		{
			continue;
		}

		if (s[i] >= key)
		{
			return false;
		}

		key = s[i];
	}
	return true;
}


void solve() {
	ll n; cin >> n;
	string name[n];
	ll taxi[n] = {0};
	ll pizza[n] = {0};
	ll girl[n] = {0};
	ll mxt(INT_MIN), mxp(INT_MIN), mxg(INT_MIN);

	for (int i = 0; i < n; ++i)
	{
		ll k;
		cin >> k;
		cin >> name[i];

		for (int j = 0; j < k ; ++j)
		{
			string pn;
			cin >> pn;
			if (istaxi(pn))
			{
				taxi[i]++;
			}
			else if (ispizza(pn))
			{
				pizza[i]++;
			}
			else
			{
				girl[i]++;
			}
		}

		mxt = max(mxt, taxi[i]);
		mxp = max(mxp, pizza[i]);
		mxg = max(mxg, girl[i]);
	}

	vector<string>t;
	vector<string>p;
	vector<string>g;




	for (ll i = 0; i < n; i++)
	{
		if (taxi[i] == mxt)
		{
			t.push_back(name[i]);
		}
	}
	for (ll i = 0; i < n; i++)
	{
		if (pizza[i] == mxp)
		{
			p.push_back(name[i]);
		}
	}
	for (ll i = 0; i < n; i++)
	{
		if (girl[i] == mxg)
		{
			g.push_back(name[i]);
		}
	}
	cout << "If you want to call a taxi, you should call: ";
	for (ll i = 0; i < t.size() - 1; i++)
	{
		cout << t[i] << ", ";
	}
	cout << t[t.size() - 1] << "." << endl;
	cout << "If you want to order a pizza, you should call: ";
	for (ll i = 0; i < p.size() - 1; i++)
	{
		cout << p[i] << ", ";
	}
	cout << p[p.size() - 1] << "." << endl;
	cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
	for (ll i = 0; i < g.size() - 1; i++)
	{
		cout << g[i] << ", ";
	}
	cout << g[g.size() - 1] << "." << endl;


}

int main() {

	c_p_c();

	int t = 1;

	while (t--) {
		solve();
	}

	return 0;
}




