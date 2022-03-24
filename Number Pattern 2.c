#include <stdio.h>
int main()
{
    int num = 5;
    printf("Enter the number : ");
    scanf("%d",&num);
    int row;
    int column;
    int data = 1;
    int add = num;

    row = 0;
    while ( row < num )
    {
        column = 0;
        data = row+1;
        while ( column <= row )
        {
            printf("%-2d ",data);
            data = data + num - column-1;
            column++;
        }
        printf("\n");
        row++;
    }

    return 0;
}
