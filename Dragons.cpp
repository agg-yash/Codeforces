#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s,n,x,y,flag(0);
    cin>>s>>n;
    
    vector< pair<int,int> > v;

    for (int i = 0; i < n; ++i)
    {
    	cin>>x>>y;
    	v.push_back(make_pair(x,y));
    }

    sort(v.begin(),v.end());


    for (int i = 0; i < n; ++i)
    {
        if ( s>v[i].first )
        {
            s=s+v[i].second;
        }

        else
        {
            flag=-1;
            break;
        }



    }


    if (flag==-1)
    {
        cout<<"NO";
    }

    else
    {
        cout<<"YES";
    }

	return 0;
}