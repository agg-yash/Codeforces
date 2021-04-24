#include<iostream>
using namespace std;

int main(){
    int number_of_questions;
    cin>>number_of_questions;

        int p[number_of_questions];
        int v[number_of_questions];
        int t[number_of_questions];

        for (int i = 0; i <number_of_questions; i++)
        {
            cin>>p[i]>>v[i]>>t[i];
        }
        
        int answer=0;

        for (int i = 0; i < number_of_questions; i++)
        {
            if (p[i]==1 && v[i]==1 )
            {
                answer= answer+1;
            }
            
            else if (p[i]==1 && t[i]==1)
            {
                answer= answer+1;
            }
            
            else if(v[i]==1 && t[i]==1)
            {
                answer=answer+1;
            }
            else{};
        }
        cout<<answer;
    return 0;
}