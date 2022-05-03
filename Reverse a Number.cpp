/*
Input: x = 123
Output: 321

Input: x = -123
Output: -321

Input: x = 120
Output: 21

*/


#include <bits/stdc++.h>
using std :: cout;
using std :: cin;

int reverseNum(int x)
{
    int ans = 0;
    int digit;
    
    while( x != 0)
    {
         digit = x%10;
         if( ans < (INT_MIN/10) || ans > (INT_MAX/10) ) return 0; // to check the zeros at end
         ans = ans*10 + digit;
         x /= 10;
    }
    return ans;
}

int main()
{
    cout << "Enter the number to be reversed : ";
    int num;
    cin >> num;
    cout << "The reversed number is : " << reverseNum(num);
    
    
    return 0;
}
