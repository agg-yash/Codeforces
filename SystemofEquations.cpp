#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a,b,answer(0);
    cin>>n>>m;

    for (int a = 0; a*a<=n && a<=m; ++i)
    {
    	int b=n-a*a;

    	if (a+b*b==m)
    	{
    		answer+=1;
    	}


    }


cout<<answer;




	return 0;
}