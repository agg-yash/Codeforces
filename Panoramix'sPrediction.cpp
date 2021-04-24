#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
	if (n==1)
	{
		return false;
	}

	for (int i = 2; i <= n/2; ++i)
	{
		if (n%i==0)
		{
			return false;
		}
	}

	return true;
}






int main()

{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m; 
    cin>>n>>m;
    int x=n;
    while(true)
    {
    	x+=1;

    	if (isprime(x))
    	{
    		break;
    	}


   
    }

if (x==m)
{
	cout<<"YES";
}

else
{
	cout<<"NO";
}

	return 0;
}