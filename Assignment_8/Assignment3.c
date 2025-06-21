#include<stdio.h>

int KMtoMeter(int iNo)
{
    int Kilometer = 1000;
    
    Kilometer = Kilometer * iNo;

    return Kilometer;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Miter is :%d\n",iRet);

    return 0;
}