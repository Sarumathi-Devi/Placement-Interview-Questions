//Longest Streak of continuous non zeros Given an array of previous scores of a batsmen. Find the longest streak of non-zero scores achieved.
// INPUT : 15 
//         [12,8,72,5,33,0,2,18,42,0,2,4,8,9,79]
// OUTPUT : 5

#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int idx;
    int arr[num];
    
    idx = 0;
    while ( idx < num ) cin >> arr[idx++];
    
    int max = INT_MIN;
    int count = 0;
    
    idx = 0;
    while ( idx < num )
    {
        if ( arr[idx++] != 0 ) count += 1;
        else
        {    
            if ( count > max )  max = count;
            count = 0;
        }
    }
    
    if ( count > max ) max = count;
    
    cout << "The longest streak of non-zero scores is : " << max;
    
    return 0;
}
