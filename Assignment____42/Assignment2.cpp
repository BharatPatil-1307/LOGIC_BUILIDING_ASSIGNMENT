#include<iostream>
using namespace std;

int Summation(int No)
{
    int iSum = 0;

    while(No != 0)
    {
        iSum += No % 10;
        No = No / 10;
        Summation(No);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    cout << "Enter the number :";
    cin >>iValue;

    iRet = Summation(iValue);

    cout << "Sumation is :"<<iRet;

    cout <<"\n";

    return 0;
}