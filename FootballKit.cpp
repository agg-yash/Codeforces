#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y,home_matches;
    cin>>n;
    map<int,int> mp;
    vector< pair<int,int> > v;
      for(int i=0;i<n;i++)
    {
        cin>>x>>y;

        mp[x]++;
        v.push_back(make_pair(x,y));
    }
    home_matches=n-1;

    for (int i = 0; i < n; ++i)
    {
    	v[i].first=home_matches+mp[v[i].second];
    	v[i].second = (2*(n-1))-v[i].first;

    	cout<<v[i].first<<" "<<v[i].second<<endl;
    }

	return 0;
}