#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number = ");
    scanf("%d",&num);

    int row = 0;
    int column = 0;
    int data = 1;
    int count = 1;


    while ( row <= num )
    {
        column = 0;
        while ( column++ < row ) printf("%-2d ",data++);
        row += 1;
        printf("\n");
    }
    data -= num;
    row = num;
    while ( row > 0 )
    {
        column = 0;
        while ( column++ < row ) printf("%-2d ",data++);
        data -= ( num + row - (count++) );
        printf("\n");
        row -= 1;
    }
    return 0;
}
