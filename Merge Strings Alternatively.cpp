// SAMPLE INPUT  : abcdef
//                 ijk
// SAMPLE OUTPUT : aibjckdef

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word1;
    getline ( cin,word1 );
    string word2;
    getline ( cin,word2 );
    string mstr; // merged string 
    int ctr = 0;
    while ( ctr < word1.length() && ctr < word2.length() )
    {
        mstr += word1[ctr];
        mstr += word2[ctr];
        ctr++;
    }
    if ( word1.length() > word2.length() )
        mstr.append(word1,ctr,word1.length());
    else
        mstr.append(word2,ctr,word2.length());
        
    cout << mstr;
    return 0;
}
