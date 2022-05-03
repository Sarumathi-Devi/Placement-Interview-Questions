/*
INPUT : arulsisdhivi
OUTPUT : a  1
         d  1
         h  1
         i  3
         l  1
         r  1
         s  2
         u  1
         v  1

NOTE : THE OUTPUT SHOULD BE IN LEXOGRAPHICAL ORDER
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "arulsisdhivi";
    
    int ctr;
    int hash[26] = { 0 };
    
    ctr = 0;
    while ( ctr < str.length() )
    {
        hash[str[ctr]-'a'] += 1;
        ctr += 1;
    }
    
    ctr = 0;
    while ( ctr < 26 )
    {
        if ( hash[ctr] != 0 )
            cout << char (ctr+97) << " " << hash[ctr] << endl;
        ctr += 1;
    }
    
    return 0;
}
