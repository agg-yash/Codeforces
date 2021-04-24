#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a;
    cin>>n;
   	vector <pair<int,int>> arr;

   	for (int i = 0; i < n; ++i)
   	{
   		cin>>a;
   		arr.push_back(make_pair(a,i+1));

   	}

   	



   	int diff =abs(arr[0].first-arr[n-1].first);
   	int pos1= arr[0].second;
   	int pos2=arr[n-1].second;
   	for (int i = 0; i < n-1; ++i)
   	{
   		if ( diff >abs(arr[i].first-arr[i+1].first))
   		{
   			diff=abs(arr[i].first-arr[i+1].first);
   			pos1=arr[i].second;
   			pos2=arr[i+1].second;
   		}

   	}

   	cout<<pos1<<" "<<pos2;








	return 0;
}