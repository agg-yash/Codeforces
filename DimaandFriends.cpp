#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,f,sum=0,answer(0);
    cin>>n;

    for (int i = 0; i < n; ++i)
    {
    	cin>>f;
    	sum+=f;
    }

    for (int i = 1; i <= 5; ++i)
    {
    	if ((sum+i)%(n+1)!=1)
    	{
    		answer++;
    	}
    }





cout<<answer;

return 0;

}