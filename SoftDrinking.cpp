#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int tml,tsl,ts;
    tml= k*l;
    tsl=c*d;
    ts=p;

    int t1,t2,t3;

    t1=tml/nl;
    t2=tsl;
    t3=ts/np;

    t1= min(t1,t2);
    t1= min(t1,t3);

    cout<<t1/n;


	return 0;
}