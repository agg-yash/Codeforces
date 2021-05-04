#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,t;
    cin>>s>>t;
    bool flag=true;
    int count(0);
    map<char,int> mps;
    map<char,int> mpt;
    for (int i = 0; i < s.length(); ++i)
    {
    	mps[ s[i] ]++ ; 
    }
    for (int i = 0; i < t.length(); ++i)
    {
    	mpt[t[i]]++; 
    }

   for (int i = 0; i < 26; ++i)
   {
   		if (mps['a'+i]==mpt['a'+i] )
   		{
   			count++;
   			
   		}
   		if (mpt['a'+i]>mps['a'+i])
   		{
   			flag=false;
   			break;
   		}
   }

   if (count==26)
   {
   		cout<<"array\n";
   		return 0;
   }
   if (!flag)
   {
   		cout<<"need tree\n";
   		return 0;
   }

int j=0;
for (int i = 0; i < s.length(); ++i)
{
	if (s[i]==t[j])
	{
		j++;
	}
}
if (j==t.length())
{
	cout<<"automaton\n";
	return 0;
}



   // int found = s.find(t);
   // if (found!= string::npos)
   // {
   // 		cout<<"automaton\n";
   // 		return 0;
   // }

   else
   {
   	cout<<"both\n";
   }
	return 0;
}