#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, countf(0),countz(0),a;
    cin>>n;


    for (int i = 1; i <= n; ++i)
    {
    	cin>>a;


    	if (a==0)
    	{
    		countz++;
    	}

    	else
    	{
    		countf++;
    	}
    }


    if (countz==0)
    {
    	cout<<"-1";
    }

    else if(countf<9)
    {
    	cout<<"0";
    }

    else
    {
    	countf= countf - countf%9;

    	for (int i = 1; i <= countf; ++i)
    	{
    		cout<<"5";
    	}


    	for (int i = 1; i <= countz; ++i)
    	{
    		cout<<"0";
    	}


    }






	return 0;
}