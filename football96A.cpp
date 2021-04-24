#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int count=1,flag=0;

    for (int i = 0; i < s.length()-1; ++i)
    {
    	if (s[i]==s[i+1])
    	{
    		count++;

    		if (count==7)
    		{
    			flag=1;
    			break;
    		}


    	}

    	else
    	{
    		count=1;
    	}
    }



if (flag==1)
{
	cout<<"YES";
}
else
{
	cout<<"NO";
}





	return 0;
}