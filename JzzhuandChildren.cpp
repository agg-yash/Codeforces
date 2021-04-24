#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    
    int n, m;
    cin >> n >> m;
    
    int input, largest_turns = 0, largest_c;

    for (int i = 0; i < n; i++){

        cin >> input;

        if (ceil((double)input/m) >= largest_turns)
         {
            largest_turns =ceil((double)input/m) ;
            largest_c = i+1;
        }
    }

    cout << largest_c << "\n";
    return 0;
}