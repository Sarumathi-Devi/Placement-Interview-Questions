//A number is said to be the Harshad number if it is divisible by the sum of its digit

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int place = 1;
    
    while ( n/place )
    {
        sum += ( n/place ) % 10;
        place *= 10;
    }
    cout << sum << endl;
    cout << (( n%sum == 0 ) ? "Yes, it is a Harshad Number" : "No, it is not a Harshad number"); 

    return 0;
}
