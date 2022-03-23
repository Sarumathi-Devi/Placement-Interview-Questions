//Majority element in the array where the majority element is an element which appears in the array more than n/2 times. Hence there is  atmost one such element  .
// INPUT : 10
//         56 44 56 44 56 44 56 56 56 36

// OUTPUT : 56

#include <stdio.h>
#include <stdlib.h>

int sortfun ( const void * num1, const void * num2 )
{
    return ( *(int*)num1 - *(int*)num2 );
}

int main()
{
    int num;
    scanf("%d",&num);
    int arr[num];

    int idx = 0;
    while ( idx < num ) scanf("%d",&arr[idx++]);
    qsort ( arr, num, sizeof(int), sortfun );
    printf("%d",arr[num/2]);

    return 0;
}
