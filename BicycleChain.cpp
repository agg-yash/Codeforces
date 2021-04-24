#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,ratio,count(0);
   
    cin>>n;
    int f[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>f[i];
    }

    cin>>m;
    int r[m];
    for (int i = 0; i < m; ++i)
    {
    	cin>>r[i];
    }

    for (int i = 0; i < n; ++i)
    {
    	

    	for (int j = 0; j < m; ++j)
    	{
    		
    		if (r[j] %f[i]==0)
    		{
    			 ratio= r[j]/f[i];
    			 static int max_ratio=ratio; 			
    		
    			 if (max_ratio<ratio)
    			 {
    			 	max_ratio=ratio;
    			 	count=1;
    			 }

    			 else if (max_ratio==ratio)
    			 {
    			 	count++;
    			 }
    		}


    	}

    }



cout<<count;
    
    



    




	return 0;
}