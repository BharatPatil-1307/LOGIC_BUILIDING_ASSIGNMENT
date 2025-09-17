#include<iostream>
using namespace std;

template <class T>
T Multiply(T No1, T No2)
{
    T iSum = 0;

    iSum = No1 * No2;

    return iSum;
}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter the first Number :";
    cin>>iValue1;

    cout<<"Enter the Second Number :";
    cin>>iValue2;

    int iRet = Multiply(iValue1,iValue2);
    cout <<"Multiplication of Integers: " << iRet << "\n";

    float fRet = Multiply(10.12f,20.21f);
    cout <<"Multiplication of Floats: " << fRet << "\n";

    return 0;


    return 0;
}