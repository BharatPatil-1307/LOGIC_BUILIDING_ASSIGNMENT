#include<stdio.h>

int MulDigit(int iNo)
{
    int iDigit = 0 ;
    int iMulti = 1 ;
    if(iNo < 0 )
    {
        iNo= -iNo;
    }

   while(iNo!= 0)
    {
       
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMulti = iMulti * iDigit;
        }
       
        iNo = iNo /10;
    }
    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number That You want Multiplication Of That Number :\n");
    scanf("%d",&iValue);

    iRet = MulDigit(iValue);

    printf("OutPut :%d\n",iRet);


    return 0;
}