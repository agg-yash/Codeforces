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




void solve() {
	ll n;
	cin >> n;
	ll arr[9];
	ll min = INT_MAX, index;
	fo(i, 9)
	{
		cin >> arr[i];
	}
	fo(i, 9) // For selecting the number with which we can create max digits. (and also highest number for that)
	{
		if (arr[i] <= min)
		{
			min = arr[i];
			index = i + 1;
		}
	}

	if (min > n) // If minimum paint only is greater than total litres
	{
		cout << "-1";
		return;
	}

	ll dig = n / min; //max digits find out
	ll rem = n % min; // remaining litres of paint
	string ans = "";

	bool flag = true;
	while (flag) // Now we have to check if we can utilise that remaining paint
	{
		flag = false;
		for (int i = 8; i >= index; --i) // check starting from highest number to our selected number
		{

			if (arr[i] <=  rem + min) // if we are able to utilise paint that was left
			{
				ans += to_string(i + 1);
				rem -= (arr[i] - min);
				flag = true;
				dig--;
				break;
			}
		}

	}

	for (int i = 0; i < dig; ++i)
	{
		ans += to_string(index);
	}
	cout << ans;



}

int main() {

	c_p_c();

	int t = 1;

	while (t--) {
		solve();
	}

	return 0;
}




