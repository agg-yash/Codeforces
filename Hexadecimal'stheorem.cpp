#include <bits/stdc++.h>
using namespace std;

int previousFibonacci(int n)
{
    double a = n / ((1 + sqrt(5)) / 2.0);
    return round(a);
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,a1,a2;

    cin>>n;
if (n==1)
{
	cout<<"1"<<" 0"<<" 0";
	return 0;
}


else if (n==2)
{
	cout<<"1"<<" 1"<<" 0"; 
	return 0;
}
    a=previousFibonacci(n);
    b=previousFibonacci(a);
    a1=previousFibonacci(b);
   	

  


    cout<<b<<" "<<b<<" "<<a1;

	return 0;
}