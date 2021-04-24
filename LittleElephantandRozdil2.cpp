#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,min_time,position,count(1);
    cin>>n;
    cin>>a;
    min_time=a;
    position=1;
    for (int i = 2; i <= n; ++i)
    {
    	cin>>a;


    	if (a<min_time)
    	{
    		min_time=a;
    		position=i;
    		count=1;


    	}

    	else if (a==min_time)
    	{
    		count++;
    		
    	}
    }
    if (count==1)
    {
    	cout<<position;/* code */
    }
    else
    {
    	cout<<"Still Rozdil";
    }

	return 0;
}