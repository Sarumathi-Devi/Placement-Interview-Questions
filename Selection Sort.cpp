// INSERTION SORT 
// TIME COMPLEXITY - O(n^2)


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of elements : ";
    cin >> num;
    int arr[num];
    cout << "Enter the elements one by one : \n";
    int idx = 0;
    while ( idx < num ) cin >> arr[idx++];
    
    int key;
    int prev;
    
    idx = 1;
    while ( idx < num )
    {
        key = arr[idx];
        prev = idx-1;
        
        while ( prev >= 0 )
        {
            if ( ! (arr[prev] > key) ) break;
            arr[prev+1] = arr[prev];
            prev -= 1;
        }
        arr[prev+1] = key;
        idx += 1;
    }
    
    idx = 0;
    while ( idx < num ) 
        cout << arr[idx++] << " ";
    
    
    return 0;
}
