#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX;
const int MAX = 200005;
int arr[MAX];

int main()
{

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,diff,count(0);
    cin>>n;
    int mn=INF,mx(0);
    for (long long int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    	mn=min(mn,arr[i]);
    	mx=max(mx,arr[i]);
    }

   
    diff= mx-mn;
   long long  int c1(0),c2(0);
   for (int i = 0; i < n; ++i)
   {
   	if (arr[i]==mn)
   	{
   			c1++;
   	}

   	if (arr[i]==mx)
   	{
   		c2++;
   	}


   }





 cout << diff << " ";
    if (mn == mx)
        cout << n * (n - 1) / 2;
    else
        cout << c1 * c2;




	return 0;
}