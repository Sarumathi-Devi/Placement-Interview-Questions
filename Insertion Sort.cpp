#include <bits/stdc++.h>
using namespace std;

inline void swap ( int *num1, int *num2 )
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int num;
    cin >> num;
    int arr[num];
    
    int idx;
    int min_idx;
    int next_idx;
    
    idx = 0;
    while ( idx < num)  
        cin >> arr[idx++];
    
    idx = 0;
    while ( idx < 9 )
    {
        min_idx = idx;
        next_idx = idx+1;
        while ( next_idx < 10 )
        {
            if ( arr[min_idx] > arr[next_idx] ) // searching for a minimum value than the minimum index
                min_idx = next_idx;
            next_idx += 1;
        }
        swap( &arr[idx], &arr[min_idx] );
        idx += 1;
    }
    
    idx = 0;
    while ( idx < 10 )
        cout << arr[idx++] << " ";
    
    return 0;
}
