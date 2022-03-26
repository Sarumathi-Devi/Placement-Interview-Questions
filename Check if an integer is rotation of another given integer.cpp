//Given two integers A and B, the task is to check if the integer A is rotation of the digits of the integer B or not. 
//If found to be true, then print “True”. Otherwise print “False”.

// INPUT : 4124165
//         1241654

// OUTPUT : True

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool isReverse ( int num, int rnum, int power )
{
    int rem;
    int copy = num;
    while ( num )
    {
        rem = num%10;
        num /= 10; 
        
        num = (rem*power) + num; 
        if ( num == rnum ) return true;
        if ( copy == num ) return false; // if the rotated number is equal to the actual number 
    }
}

int main()
{
    int num;
    cout << "Enter any number : ";
    cin >> num;
    int rnum;
    cout << "Enter a number to check whether its a rotation of first entered number or not : ";
    cin >> rnum;
    
    int nod = floor(log10(num) + 1); // to check number of digits
    int power = pow(10,nod-1); 
    
    cout << ( isReverse ( num, rnum, power ) ? "True" : "False" );

    return 0;
}
