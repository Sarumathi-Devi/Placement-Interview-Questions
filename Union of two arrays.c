#include <bits/stdc++.h>
using namespace std;

void getElements ( int a[], int n )
{
    int i;
    cout << "Enter the elements : ";
    for ( i = 0; i < n; i++ )   cin >> a[i];
}
int main()
{
    int m;
    cout << "Enter the array 1 size = ";
    cin >> m;
    int a[m];   getElements(a,m);
    
    int n;
    cout << "Enter the array 2 size = ";
    cin >> n;
    int b[n];   getElements(b,n);

    int c[m+n];
    int i,j;
    
    for ( i = 0,j = 0; i < m && j < n;  )
    {
        if ( a[i] != a[j] )
            if ( a[i] < a[j] )  
                c[i] = a[i++];
            else    
                c[i] = b[j++];
        else
            c[i++] = b[j++];
    }
    
    while ( i < m ) c[i] = a[i];
    while ( j < n ) c[j] = b[j];
    
    cout << "Union of the array is = ";
    for ( i = 0; i < n; i++ )
    {
        cout << c[i] << " ";
    }
    
    
    return 0;
}
