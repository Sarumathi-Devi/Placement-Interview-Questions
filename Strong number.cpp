//Strong numbers are those numbers whose sum of factorial of each digits is equal to the original number.

#include <bits/stdc++.h>
using namespace std;

int factorial ( int n )
{
    if ( n == 0 ) return 1;
    return ( n * factorial(n-1) );
}

int main()
{
    int n;
    cin >> n;
    int place = 1;
    int sum = 0;
    while ( n/place )
    {
        sum += factorial( (n/place)%10 );
        place *= 10;
    }
    if ( n == sum ) cout << "The given number is a Strong number";
    else cout << "The given number is not a Strong number";
    
    return 0;
}
