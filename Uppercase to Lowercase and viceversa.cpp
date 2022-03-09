#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    
    int i = 0;
    while ( i < str.length() )
    {
        /*  if ( isupper(str[i]) )   str[i] = tolower(str[i]);
            else    str[i] = toupper(str[i]);  */
        if ( str[i] >= 'A' && str[i] <= 'Z' ) str[i] += 32;
        else str[i] -= 32;
        i++;
    }
    cout << str;
    
    return 0;
}
