/*
Input: strs = ["flower","flow","flight"]
Output: "fl"
*/

#include <bits/stdc++.h>
#include <vector>
using std :: vector;
using std :: cout;
using std :: cin;
using std :: string;
int main()
{
    vector <string> str;
    str.push_back("flower");
    str.push_back("flaw");
    str.push_back("flipkart");
    
    int min_length = INT_MAX;
    char temp;
    string result = "";
    
    int ctr = 0;
    while ( ctr < str.size() )
    {
        if ( min_length > str[ctr].length() )
            min_length = str[ctr].length();   // finding min_length of gthe string to resuce the complexity
        ctr += 1;
    }
    
    int idx;
    ctr = 0;
    int flag = 1;
    
    while ( ctr < min_length )
    {
        temp = str[0][ctr];
        idx = 1;
        while ( idx < str.size() )
        {
            if ( str[idx][ctr] != temp ) 
            {
                flag = 0;
                break;
            }
            idx += 1;
        }
        if ( flag == 0 ) break;
        result += temp;
        ctr += 1;
    }
    
    cout << "The longest common prefix is : " << result;
};
