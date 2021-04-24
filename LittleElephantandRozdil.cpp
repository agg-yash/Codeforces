#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a;
    cin>>n;

    vector<pair<int,int>> v;
    for (int i = 0; i < n; ++i)
    {
    	cin>>a;
    	v.push_back(make_pair(a,i+1));
    }


    sort(v.begin(), v.end());

    if (v[0].first==v[1].first)
    {
    	cout<<"Still Rozdil";
    }

    else
    {
    	cout<<v[0].second;
    }

	return 0;
}