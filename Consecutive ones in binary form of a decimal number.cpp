//Print a single base- integer that denotes the maximum number of consecutive 's in the binary representation of .

// INPUT : 125
// OUTPUT : 5 [ 1111101 ( base 2 ) maximum number of 5 ones is grouped together ]

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int num;
    cin >> num;
    
    int max = 0;
    int count = 0;
    
    while ( num )
    {
        if ( num % 2 == 1 ) count += 1;
        else count = 0;
        if ( count > max ) max = count;
        num /= 2;
    }
    cout << "The maximum number of consective ones is" << max;
    
    return 0;
}
