#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int x,y,z,sumx=0,sumy=0,sumz=0;
    for (int i = 0; i < n; ++i)
    {
    	cin>>x>>y>>z;
    	sumx= sumx+x;
    	sumy= sumy+y;
    	sumz= sumz+z;
    }

    if(sumz==0 && sumy==0 && sumz==0)
    {
    	cout<<"YES";
    }

    else{
    	cout<<"NO";
    }

	return 0;
}