#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, k,answer;
    cin>>n>>k;

    long long int boundary= ceil((double)n/2);

    if (k<=boundary)
    {
    	answer=(k*2)-1;
    }

    else
    {
    	answer= (k-boundary)*2;
    }


    cout<<answer;
	return 0;
}