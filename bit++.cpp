

#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s[n];
    int x=0;
for (int i = 0; i < n; i++)
{
    cin>>s[i];
}

for (int i = 0; i < n; i++)
{
    if (s[i]=="++X" )
    {
        ++x;
    }
    
    else if (s[i]=="X++")
    {
        x++;
    }
    else if (s[i]=="--X")
    {
        --x;
    }
    else{x--;}

}

    cout<<x;
    return 0;
}