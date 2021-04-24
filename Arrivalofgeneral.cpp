#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, time = 0;
    cin >> n;

    int height[n], fake[n];
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    for (int i = 0; i < n; i++)
    {
        fake[i]=height[i];
    }
    
    sort(fake, fake+n);
    int max= fake[n-1];
    int min = fake[0];

for (int i = 0; height[n-1]!= min ; i++)
{
    if(height[i]== min)
    {
        int temp = height[i];
        height[i]= height[i+1];
        height[i+1]= temp;
        time++; 
    }
}

for (int i = n-2; height[0]!= max ; i--)
{
    if(height[i]== max)
    {
        int temp = height[i];
        height[i]= height[i-1];
        height[i-1]= temp;
        time++; 
    }
}

    
cout<<time;

    return 0;
}