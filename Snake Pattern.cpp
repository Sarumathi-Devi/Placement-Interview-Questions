/*
INPUT : 4
OUTPUT : 
    1  2  3  4
   8  7  6  5
  9 10 11 12
16 15 14 13
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    
    int row;
    int ctr;
    int data = 1;
    
    row = 0;
    while ( row < num )
    {
        ctr = 0;
        while ( ctr < num-row-1 && ++ctr )
            cout << " ";
            
        ctr = 0;
        while ( ctr++ < num )
        {
            cout << setw(2); 
            if ( !(row % 2) ) cout << data++ << " "; // for even rows { row starts from 0 }
            else    cout << (--data) << " "; // for odd rows
        }
        data += num;
        cout << endl;
        row += 1;
    }
    
    return 0;
}
