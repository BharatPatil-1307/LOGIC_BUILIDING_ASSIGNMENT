#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo > 0)
    {
        printf("Invalid Input\n");
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d * ",iCnt);
    }
    printf("\n");
}


int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Pattern(iValue);


    return 0;
}