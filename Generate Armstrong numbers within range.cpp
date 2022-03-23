#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int numberOfDigits ( int num )
{
    int count = 0;
    while ( num )
    {
        count++;
        num /= 10;
    }
    return count;
}

void printArmstrong ( int num )
{
    int sum = 0;
    int place = 1;
    int nod = numberOfDigits(num);
    while ( num/place )
    {
        sum += pow( (num/place)%10, nod );
        place *= 10;
    }
    if ( sum == num ) cout << sum << " ";
}

int main()
{
    int from,to;
    cin >> from >> to;
    while ( from <= to ) printArmstrong ( from++ );
    
    return 0;
}
