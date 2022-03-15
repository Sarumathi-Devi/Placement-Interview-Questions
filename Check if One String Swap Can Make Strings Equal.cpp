#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    getline ( cin,s1 );
    getline ( cin,s2 );
    int ctr = 0;
    int flag = 1;
    int count = 0;
    if ( s1 == s2 ) 
    {
        cout << "Both the strings are equal";
        goto end;
    }

    while ( ctr < s1.length() )
    {
        if ( s1.find(s2[ctr]) == string :: npos ) 
        {
           flag = 0;
           goto last;
        }
        ctr++;
    }

    ctr = 0;
    while ( ctr < s1.length() )
    {
        if ( s1[ctr] != s2[ctr] ) 
            count++;
        if ( count > 2 ) break;
        ctr++;
    } 

    last:
    
    if ( flag == 1 && count == 2 ) cout << "Yes, One string swap can make the strings equal";
    else cout << "No, One string swap can not make the strings equal";
    end:
    return 0;
}
