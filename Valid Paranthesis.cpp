/*
Input: s = "()"
Output: valid

Input: s = "(]"
Output: invalid

Input: s = "()[]{}"
Output: valid

*/

#include <bits/stdc++.h>
using namespace std;
#include <stack>

bool isValid ( string str ) 
{
    if ( str.size() == 1 ) return false;
    stack <char>stk;
    
    for ( const char ch : str )
    {
        if ( ch == '{' || ch == '(' || ch == '[' )
            stk.push(ch);
        
        else if (( ch == ')' && !stk.empty() && (stk.top() == '(' )) || 
                ( ch == ']' && !stk.empty() && (stk.top() == '['  )) || 
                ( ch == '}' && !stk.empty() && (stk.top() == '{' ))) 
        stk.pop();
        
        else stk.push(ch);
    }
    return stk.empty();
}

int main()
{
    string str;
    getline ( cin,str );
    
    if ( ! isValid(str) ) cout << "Invalid";
    else cout << "Valid";
    
    return 0;
}
