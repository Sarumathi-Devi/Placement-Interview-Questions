#include <stdio.h>

void swap ( int *p1, int *p2 )
{
    int t;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
}

int main()
{
    int n;
    printf("Enter the size of the array = ");
    scanf("%d",&n);
    int a[n];
    for ( int i = 0; i < n; i++ ) 
        scanf("%d",&a[i]);
    
    for ( int i = 0 ; i < n; i++ )
        for ( int j = 0; j < n-i-1; j++ )
            if ( a[j] > a[j+1] ) 
                swap(&a[j],&a[j+1]);
    
    for ( int i = 0; i < n; i++ ) 
        printf("%d ",a[i]);
        
    return 0;
}

