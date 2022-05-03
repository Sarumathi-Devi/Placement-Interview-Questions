#include <bits/stdc++.h>
using std :: cout;
using std :: endl;

void swap ( int *c1, int *c2 )
{
    int temp;
    temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}

void printPermutation ( int arr[], int start, int end )
{
    if ( start == end )
    {
        int ctr = 0;
        while ( ctr < end )
          cout << arr[ctr++] << " ";
        cout << endl;
    }
    else
    {
        int idx = start;
        while ( idx < end )
        {
            if ( distinctCheck() )
            {
                swap ( &arr[idx], &arr[start] );
                printPermutation ( arr, start+1, end );
                swap ( &arr[idx], &arr[start] );
            }
            idx += 1;
        }
    }
}

int main()
{
    int arr[] = { 10,10,30,20,30 };
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printPermutation ( arr, 0, size );
    return 0;
}
