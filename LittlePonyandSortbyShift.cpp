#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,pos,x(0),y;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
    	cin>>y;
    	v.push_back(y);
    }
    for (int i = 0; i < n-1; ++i)
    {
    	if (v[i]>v[i+1])
    	{
    		pos=i;
    		x++;
    	}
    }
    if (v[n-1]>v[0])
    {
    	pos=n-1;
    	x++;
    }
    if (x==0)
    {
    	cout<<"0\n";
    }
    else if(x>1)
    {
    	cout<<"-1\n";
    }
    else
    {
    	cout<<n-pos-1;
    }
	return 0;
}