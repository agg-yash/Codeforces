#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    string s,answer;
    
    cin>>k;
    cin>>s;
    int count[26]={0};
    
    for (int i = 0; i < s.length(); ++i)
    {
      
      count[s[i]-'a']+=1;
    }

    int b=0;
    while(b<26)
    {
      if (count[b]%k!=0)
      {

        break;
      }

      else
        {
            answer.append(count[b]/k, 'a' + b);
            b++;
        }

    }


if(b==26)
    {
        
    }while (k--)
        {
            cout <<answer;
        }
        cout << endl;
    else
    {
        cout << -1 << endl;
    }

  return 0;
}