//INPUT : 5
//OUTPUT :     * 1
//            ** 23
//           *** 345
//          **** 4567
//         ***** 56789
//         54321 13579
//          5432 3579
//           543 579
//            54 79
//             4 9



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num; 
    cin >> num;
    int row;
    int column;
    int ctr;
    
    row = 0;
    while ( row < num )
    {
        ctr = 0;
        while ( ctr++ < (num-row-1) ) cout << " ";
        ctr = 0;
        while ( ctr++ <= row ) cout << "*" ;
        cout << " ";
        ctr = 0;
        while ( ctr++ <= row ) cout << ctr+row;
        row += 1;
        cout << endl;
    }
    
    row = 0;
    while ( row < num )
    {
        ctr = 0;
        while ( ctr++ < row ) cout << " ";
        ctr = 0;
        while ( ctr < (num-row) ) cout << (num-ctr++);
        cout << " ";
        ctr = (row*2)+1;
        while ( ctr < num*2 ) 
        {
            cout << ctr;
            ctr += 2;
        }
        cout << endl;
        row++;
    }
    
    return 0;
}
