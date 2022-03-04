#include <bits/stdc++.h>
using namespace std;

void swap ( int *p1, int *p2 )
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int i = 0;
    
    while ( i < n )
        cin >> a[i++];
        
    int start = 0;
    int end = n-1;
    
    while ( start < end )
        swap ( &a[start++], &a[end--] );
        
    i = 0;
    while ( i < n )
        cout << a[i++] << " ";
    
    return 0;
}
