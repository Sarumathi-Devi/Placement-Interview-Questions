// Check wheather a given number is a pan number or not.
//A valid pan number contains each and every digit from 0 to 9 without repetation.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int num = 635421987;
    int ctr = 0;
    int rem;
    
    char arr[10];
    memset( arr, 'f', sizeof(arr) );
    
    while ( num )
    {
        rem = num % 10;
        if ( arr[rem] == 'f' )
            arr[rem] = 't';
        else break;
        num /= 10;
    }
    cout << ( num > 0 ? "No, the given number is not a PAN digital number" : "Yes, the given number is a PAN digital number" ) ;
    
    return 0;
}
