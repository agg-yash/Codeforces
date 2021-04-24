#include <iostream>

using namespace std;

int main()
{
    int a1[5], a2[5], a3[5], a4[5], a5[5];
    int moves = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> a1[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cin >> a2[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> a3[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> a4[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> a5[i];
    }

    for (int i = 0; i <5; i++)
    {
        if (a1[i]==1)
        {
            a2[i]=1;
            moves++;
        }
        
    }

    
    for (int i = 0; i <5; i++)
    {
        if (a2[i]==1)
        {
            a3[i]=1;
            moves++;
        }
        
    }


    for (int i = 0; i <5; i++)
    {
        if (a5[i]==1)
        {
            a4[i]=1;
            moves++;
        }
        
    }

    
    for (int i = 0; i <5; i++)
    {
        if (a4[i]==1)
        {
            a3[i]=1;

            moves++;
        }
        
    }


    for (int i = 0; i < 2; i++)
    {
        if (a3[i]==1)
        {
            a3[i+1]=1;
            moves++;
        }
        
    }
    
    for (int i = 4; i >2; i--)
    {
        if (a3[i]==1)
        {
            a3[i-1]=1;
            moves++;
        }
        
    }
    






    cout << moves;

    return 0;
}