#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double r,x1,y1,x2,y2,distance;
    cin>>r>>x1>>y1>>x2>>y2;
    distance=  sqrt( (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1) );
    int ans= ceil(distance/(2*r));
    cout<<ans;
	return 0;
}