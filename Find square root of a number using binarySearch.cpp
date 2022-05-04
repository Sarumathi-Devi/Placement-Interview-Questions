/*
Input: x = 4
Output: 2

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned. 

*/
#include <bits/stdc++.h>
using std :: cout;
using std :: cin;

int binarySearch ( int start, long int end, int num )
{
    long long int mid;
    int answer;
    
    while ( start <= end )
    {
        mid = (start+end)/2;
        
        if ( mid*mid == num )  return mid;
        else if ( mid*mid > num ) end = mid-1;
        else 
        {
            start = mid+1;
            answer = mid;  // temporary storing thee mid value
        }
    }
    return answer;
}

int main()
{
    cout << "Enter a Number : ";
    int num;
    cin >> num;
    
    cout << "The square root of a number using binarySearch is : " << binarySearch( 1, num, num );
}
