#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    ll n,m,cnt(0);
    cin>>n>>m;
    int arr[m];
    for (int i = 0; i < m; ++i)
    {
    	
    	cin>>arr[i];
    }
    

    sort(arr,arr+m);
   
    if (arr[0]==1 || arr[m-1]==n )
    {
    	cout<<"NO\n";
    	return 0;
    }

     for (int i = 0; i < m-1; ++i)
        {
            if (arr[i+1]-arr[i]==1)
            {
                cnt++;
                 if (cnt==2)
                 {
                cout<<"NO\n";
                return 0;
                  }
            }
           
            else
            {
                cnt=0;
            }
        }   
        cout<<"YES\n";


	return 0;
}