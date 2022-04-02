// Given an array find the minimum number of swaps to segregate even numbers followed by odd numbers.
// INPUT : 10
//         1 2 3 4 5 6 7 8 9 10
// OUTPUT : 3

// INPUT : 9
//         1 2 3 4 5 6 7 8 9 
// OUTPUT : 2



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter the size of the array = ";
    cin >> num;
    int arr[num];
    cout << "Enter the elements one by one..." << endl;
    
    int idx = 0;
    while ( idx < num )
        cin >> arr[idx++];
    int evencount = 0;
    int swapcount = 0;
        
    idx = 0;
    while ( idx < num ) // count the even numbers in the array
        arr[idx++]%2 ?  : evencount += 1;
    
    idx = 0;
    while ( idx <= evencount )
        arr[idx++]%2 ?  : swapcount += 1;
        
    cout << "Swapcount to segregate even numbers following by odd numbers is " << swapcount;
    
    return 0;
}
