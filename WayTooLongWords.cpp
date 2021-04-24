#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    
    
        for (int i = 0; i < n; i++)
        {
            if (s[i].length() > 10)
            {
                cout << s[i].at(0) << s[i].length() - 2 << s[i].at(s[i].length()-1)<<endl;
            }
            else
            {
                cout<<s[i]<<endl;
            }
               
        }
    
    return 0;
}