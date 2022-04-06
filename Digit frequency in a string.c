/*
Given a string, consisting of alphabets and digits, find the frequency of each digit in the given string.
INPUT : a11472o5t6
OUTPUT : 0 2 1 0 1 1 1 1 0 0 

EXPLANATION : 

In the given string: 1 occurs two times and 2,4,5,6 and 7 occur one time each.
The remaining digits 0,3,8,9 don't occur at all.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[1000];
    //str = (char *)malloc(sizeof(char));
    
    scanf("%[^\n]s",str);
        
    int idx;
    int temp;
    int hash[10] = {0}; 
    
    idx = 0;
    while ( idx < strlen(str) )
    {
        temp = str[idx] - '0';
        if ( temp >= 0 && temp <= 9 )
            hash[temp] += 1;
        idx += 1;
    }
    
    idx = 0;
    while ( idx < 10 )
        printf("%d ",hash[idx++]);
    
    return 0;
}
