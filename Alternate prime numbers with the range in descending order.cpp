//INPUT : 20
//OUTPUT : 19 13 7 3
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    
    bool arr[num+1];
    memset( arr, true, sizeof(arr) );
    
    int start = 2;
    int multiple = 0;
    
    while ( start < sqrt(num) )
    {
        if ( arr[start] == true )
        {
            multiple = start*start;
            while ( multiple <= num )
            {
                arr[multiple] = false;
                multiple += start;
            }
        }
        start++;
    }
    
    int count = 2;
    
    while ( num >= 2 )
    {
        if ( arr[num] == true ) 
        {
            if ( (count++) % 2 == 0 )
                cout << num << " ";
        }
        num -= 1;
    }
    return 0;
}
