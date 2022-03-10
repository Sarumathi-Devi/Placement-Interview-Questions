#include <bits/stdc++.h>
using namespace std;

int armPow ( int n, int count )
{
    int poww = 1;
    for ( int i = 0; i < count; poww *= n, i++ );
    return poww;
}

int main()
{
    int n;
    cin >> n;
    int temp = n;
    int place = 1;
    int count = 0;
    int power;
    int sum = 0;
    
    while ( n != 0 )
    {
        count++;
        n /= 10;
    }
    n = temp;
  
    while ( n/place )
    { 
        power = armPow( (n/place)%10, count );
        sum += power;
        place *= 10;
    }
    
    if ( sum == n ) cout << "The given number is a Armstrong number";
    else cout << "The given number is not an Armstrong number";
    
    
    return 0;
}
