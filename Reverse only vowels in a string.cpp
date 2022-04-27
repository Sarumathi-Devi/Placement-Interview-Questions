/*
Input : arulmozhi
Output : irolmuzha
*/

#include <bits/stdc++.h>
using std :: cout;
using std :: string;

inline bool isVowel ( char ch )
{
    if ( ch >= 'A' && ch <= 'Z' ) ch += 32;
    if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'  ) return true;
    return false;
}

inline void swap ( char *ch1, char *ch2 )
{
    char temp;
    temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}

int main()
{
    string str;
    getline ( cin,str );
    int start;
    int end;

    start = 0;
    end = str.size()-1;

    while ( start < end )
    {
        if ( isVowel(str[start]) == false ) 
        {
            start += 1;
            continue;
        }
        else if ( isVowel(str[end]) == false ) 
        {
            end -= 1;
            continue;
        }
        
        swap ( &str[start],&str[end] );
        start += 1;
        end -= 1;
    }

    cout << str;

    return 0;
}
