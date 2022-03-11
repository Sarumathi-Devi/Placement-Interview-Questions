//Adam number is a number when reversed, the square of the number and the square of the reversed number should be numbers which are reverse of each other.

#include <bits/stdc++.h>
using namespace std;

inline int reverse ( int n )
{
    int rev = 0;
    while ( n )
    {
        rev = (rev*10) + n%10;
        n /= 10;
    }
    return rev;
}

int main()
{
    int n;
    cin >> n;
    int m = reverse(n);
    if ( (n*n) == reverse(m*m) ) cout << "Yes, the given number is a Adam number";
    else cout << "No, the given number is not a Adam number";
    return 0;
}
