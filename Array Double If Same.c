/*
Write a program to convert the array in such a way that double its value and replace the next number with 0 
if current and next element are same and rearrange the array such that all 0's shifted to the end.

INPUT :  0 3 3 3 0 0 7 7 0 9
OUTPUT :  6 3 14 9 0 0 0 0 0 0
EXPLANATION : In the given array the second and third element is equal hence double the first 3 and make the next index value as 0. 
The element which is in third index doesn't have any match so leave as it is. finally move all zeroz to the end

*/

#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int arr[num];
    int ctr = 0;
    int idx = 0;
    while ( ctr < num )
        scanf("%d",&arr[ctr++]);
    
    ctr = 0;
    while ( ctr < num )
    {
        if ( arr[ctr] == arr[ctr+1] ) 
        {
            arr[idx++] = arr[ctr]*2;
            arr[ctr+1] = 0;
        }
        else 
            arr[idx++] = arr[ctr];
        ctr += 1;
    }
  
    ctr = 0;
    idx = 0;
    while ( ctr < num )
        if ( arr[ctr++] == 0 ) idx += 1;  // idx acting as zero count
    
    ctr = 0;
    while ( ctr < num )
    {
        if ( arr[ctr] != 0 ) printf("%d ",arr[ctr]); // printing elements which is not zero
        ctr += 1;
    }

    while ( idx ) // filling the last elements with zero
    {
        printf("0 ");
        idx -= 1;
    }

    return 0;
}
