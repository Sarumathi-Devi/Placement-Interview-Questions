//  A pangram is a sentence containing every letter in the English Alphabet.
// INPUT : "The quick brown fox jumps over the lazy dog"
// OUTPUT : YES
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "the quick brown fox jumps over a lazy dog";
    int hash[str.length()] = {0};
    
    int idx = 0;
    while ( idx < str.length() )
    {
        if ( str[idx] == ' ' ) idx += 1;
        if ( hash[str[idx]-'a'] == 0 ) hash[str[idx] - 'a'] += 1;
        idx += 1;
    }
    
    /*idx = 0;
    while ( idx < 26 )
    {
        cout << char(idx + 'a') << "----" << hash[idx] << endl;
        idx += 1;
    }*/ // code for checking frequency 
    
    idx = 0;
    while ( idx < 26 )
    {
        if ( hash[idx++] != 1 ) 
        {
            cout << "Not a Pangram";
            break;
        }
    }
    
    if ( idx == 26 ) cout << "Pangram";
    
    return 0;
}
