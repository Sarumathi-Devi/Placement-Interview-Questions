/*

Input: str1 = "hello", str2 = "ll"
Output: 2 ( index )

Input: haystack = "aaaaa", needle = "bba"
Output: -1

*/

#include <bits/stdc++.h>
using std :: string;
using std :: cout;
using std :: cin;

int strStr(string hs, string nd) 
{
    if ( nd.size() == 0 ) return 0;
    
    int hs_idx = 0;
    int nd_idx = 0;
    while ( hs_idx < hs.size() && nd_idx < nd.size() )
    {
        if ( hs[hs_idx] == nd[nd_idx] )  // when there is a match then increase both the pointers
        {
            hs_idx += 1;
            nd_idx += 1;
            if ( nd_idx == nd.size() ) // if the whole pattern has been matched then return
              return (hs_idx - nd.size()); // the value by going needle size steps backwards from the current index in array
        }
        else // when there is no match then start checking from the haystack index
        {
            hs_idx = hs_idx - nd_idx + 1;  // such that it goes backwards till whatever length has been matched 
            nd_idx = 0;
        }
    }
    return -1;
}



int main()
{
    string str1 = "hello";
    string str2 = "ll";
    
    int res = strStr(str1,str2);
    if ( res != -1 ) cout << res;
    else cout << -1;

    return 0;
}
