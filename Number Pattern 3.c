// INPUT : 39714
// OUTPUT : 3 9 7 1 4 
//          9 7 1 4 
//          7 1 4 
//          1 4 
//          4 

#include <stdio.h>
#include <math.h>

int numberOfDigits ( int input )
{
    int count = 0;
    while ( input ) 
    {
        count++;
        input /= 10;
    }
    return count;
}

int main()
{
    long unsigned int num;
    printf("Enter the number : ");
    scanf("%ld",&num);
    
    int row;
    int column;
    int nod = numberOfDigits ( num );
    int place = pow(10,nod);
    
    row = nod;
    while ( row > 0 )
    {
        column = row;
        place = pow (10,row );
        while ( column-- > 0 )
        {
            printf("%ld ",(num%place)/(place/10));
            place /= 10;
        }
        row--;
        printf("\n");
    }
    return 0;
}
