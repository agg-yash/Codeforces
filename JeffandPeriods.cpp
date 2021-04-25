#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main()

{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x,y,n,i,k,j;

    map< ll, vector<ll> >mp;
    cin>>n;

    	for (int i = 0; i < n; ++i)
    	{
    		cin>>x;
    		mp[x].push_back(i);
    	}

    	vector< pair<int,int> > v;
    	 map<ll,vector<ll>>::iterator it= mp.begin();

    	 while(it!=mp.end())
    	 {
    	 	k= it->first;

    	 	if (mp[k].size()==1)
    	 	{
    	 		v.push_back(make_pair(k,0));
    	 	}

    	 	else
    	 	{
    	 		set<ll> s;

    	 		for (int i = 1; i < mp[k].size(); ++i)
    	 		{
    	 			s.insert(abs(mp[k][i]-mp[k][i-1]));

    	 		}

    	 		set<ll>::iterator q =s.begin();

    	 		if(s.size()==1)
    	 		{
            v.push_back(make_pair(k,*q));
                }



    	 	}
    	 	it++;

    	 }



    	 cout<<v.size()<<endl;

    	 for(i=0;i<v.size();i++)
    	 {
        cout<<v[i].first<<" "<<v[i].second<<endl;
        }





	return 0;
}