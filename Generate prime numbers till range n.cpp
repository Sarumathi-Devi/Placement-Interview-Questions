// This algorithm is named as SIEVE OF ERATOSTHENES

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number = ";
    cin >> n;
    int ctr = 0;
    bool prime[n+1];
    memset ( prime, true, sizeof(prime) );
    cout << endl;
    int count = 0;
    int start;
    
    start = 2;
    while ( start < sqrt(n) )
    {
        if ( prime[start] == true )
        {
            ctr = start*start;
            while ( ctr <= n )
            {
                prime[ctr] = false;
                ctr += start;
            }
        }
        start += 1;
    }
    cout << "The prime numbers till " << n << " are ";
    ctr = 2;
    while ( ctr < n )
    {
        if ( prime[ctr] == true ) cout << ctr << " ";
        ctr++;
    }
}
