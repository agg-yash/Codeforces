#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b;
    cin>>n>>a>>b;

   int start=n-b,answer=0;

   for (int i = 0; i <b+1 ; ++i)
   {
   	
   		if (start<=a )
    	{
    	start+=1;
    	}

    	else
    	{
    		answer++;
    		start+=1;
    	}


   } 



cout<<answer;





	return 0;
}