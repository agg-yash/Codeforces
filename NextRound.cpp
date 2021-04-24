#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int marks[n];
    int answer=0;

    for (int i = 0; i < n; i++)
    {
        cin>>marks[i];

    }
    
    for (int i = 0; i < n; i++)
    {

       if(marks[i]>=marks[k-1]&&marks[i]>0)
            answer++;
    

    }
    
    cout<<answer;




    return 0;
}