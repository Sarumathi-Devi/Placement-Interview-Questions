#include <bits/stdc++.h>
int main()
{
    
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j; 
    for ( i = 0; i < n; i++ )
    {
        scanf("%d",&a[i]);
    }
    
    int count = max = res = 0;
    for ( i = 0; i < n; i++ )
    {
        count = 0;
        for ( j = i+1; j < n; j++ )
        {
            if ( a[i] == a[j] ) count += 1;
            else break;
        }
        if ( max < count )  
        {
            res = a[i];
            max = count;
        }
    }
    printf("%d",res);

    return 0;
}
