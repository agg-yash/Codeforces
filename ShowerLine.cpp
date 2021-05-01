#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr [5][5];
    int a[5];
    int sum = INT_MIN,bruh;
    for (int i = 0; i < 5; ++i)
    {
    	a[i]=i;
    	for (int j = 0; j < 5; ++j)
    	{
    		cin>>arr[i][j];
    	}
    }

    int k=0;
    do
    {
    	bruh=0;
    	 bruh += (arr[a[k]][a[k+1]])+(arr[a[k+1]][a[k]])+ (arr[a[k+2]][a[k+3]])+(arr[a[k+3]][a[k+2]])+(arr[a[k+1]][a[k+2]])+(arr[a[k+2]][a[k+1]])+(arr[a[k+3]][a[k+4]])+(arr[a[k+4]][a[k+3]])+( arr[a[k+2]][a[k+3]])+(arr[a[k+3]][a[k+2]])+(arr[a[k+3]][a[k+4]])+(arr[a[k+4]][a[k+3]]);    ;
    	sum = max(sum,bruh);


    }while(next_permutation(a,a+5));


    cout<<sum;


	return 0;
}