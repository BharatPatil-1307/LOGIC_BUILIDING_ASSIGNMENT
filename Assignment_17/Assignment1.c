#include<stdio.h>

void Pattern(int Row, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= Row; i++)
    {
        for(j = iCol; j>= 1 ;j--)
        {
            if(i==j)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }

        printf("\n");
    }
}


int main()
{
    
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number Of Rows :");
    scanf("%d",&iValue1);

    printf("Enter Number Of Colums :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);


    return 0;
}