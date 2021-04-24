#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,max;
    cin>>n;
	cin>>a>>b;  	
	max=b;

	int count=max;

  	for (int i = 1; i <= n-1; ++i)
  	{
  		cin>>a>>b;
  		
  		count= (count-a)+b;

  		if (count>max)
  		{
  			max=count;
  		}
  	}

 cout<<max;







	return 0;
}