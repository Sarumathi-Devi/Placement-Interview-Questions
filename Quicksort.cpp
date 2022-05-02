#include <bits/stdc++.h>

inline void swap ( int *num1, int *num2 )
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition ( int arr[], int start, int end )
{
    int ctr = start;
    int pidx = start-1;

    while ( ctr < end )
    {
        if ( arr[ctr] < arr[end-1] )
        {
            pidx += 1;
            swap( &arr[ctr], &arr[pidx] );
        }
        ctr += 1;
    }
    pidx += 1;
    swap( &arr[pidx], &arr[end-1] );
    
    return pidx;
}

void quickSort ( int arr[], int start, int end )
{
    if ( start < end )
    {
        int pidx;
        pidx= partition ( arr, start, end );
        quickSort( arr, start, pidx-1 );
        quickSort( arr, pidx+1, end );
    }
}

void printArray ( int arr[], int size )
{
    int ctr = 0;
    while ( ctr < size )
    {
        std :: cout << arr[ctr] << " ";
        ctr += 1;
    }
    std :: cout << std :: endl;
}

int main()
{
    int arr[] = { 12,5,98,43,123,342,44,1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    //printArray ( arr, n );
    quickSort( arr, 0, n );
    printArray ( arr, n );

    return 0;
}
