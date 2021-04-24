#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,l,j(0);
    vector <pair<int,int>> >v;

    cin>>n>>m;
    
   
   	 for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(make_pair(a, i));
    }
    
     for (int k=0; k< n + j ; k++)
    {
        if (v[k].first > m)
        {
            v.push_back(make_pair(v[k].first - m, v[k].second));
            j++;
        } 
        else 
        {
            l = v[k].second + 1;
        }
        
    }



cout << l;


	return 0;
}