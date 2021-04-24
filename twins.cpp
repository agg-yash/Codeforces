#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0, sum=0, ans=0;
    cin>>n;
    int coins[n];

    for(int i=0; i<n; i++)
    {
        cin>>coins[i];
        sum+= coins[i];
    }
    
    sum= sum/2;
    sort(coins, coins+n);
    
    for (int i = n-1; i >=0; i--)
    {
        if (ans<=sum)
        {
            ans+= coins[i];
            count++;
        }
       if(ans>sum)
       {
           break;
       }
    }
    
    cout<<count;


    
    return 0;
}