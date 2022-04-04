//count the number of array elements such that all the elements to its left are strictly smaller than it.
// NOTE : The first element of the array will be considered to be always satisfying the condition.

// INPUT : { 25, 46, 77, 88, 99 }:
// OUTPUT : 5

#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&num);
    int arr[num];
    int idx = 0;
    printf("Enter the elements one by one : \n");
    while ( idx < num ) scanf("%d",&arr[idx++]);

    idx = 1;
    int max = arr[0];
    int count = 0;
    while ( idx < num ) 
    {
        if ( arr[idx] > max )
        {
            max = arr[idx];
            count += 1;
        }
        idx += 1;
    }
    printf("%d",count+1);

    return 0;
}
