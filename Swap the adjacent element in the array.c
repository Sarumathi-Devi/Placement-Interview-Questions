//INPUT : 5
//        10 20 30 40 50

//OUTPUT : 20 10 40 30 50

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for ( int i = 0; i < n; i++ ) scanf("%d",&a[i]);
    int temp = 0;
    for ( int i = 0; i < n-1; i += 2 )
    {
        temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }
    for ( int i = 0; i < n; i++ ) printf("%d ",a[i]);
    return 0;
}
