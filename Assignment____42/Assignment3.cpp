#include<iostream>
using namespace std;

int Strlen(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
        Strlen(str);
    }
    return iCount;
}


int main()
{
    int iRet = 0;
    char Arr[20];

    cout <<"Enter the String :";
    cin.getline(Arr, 20);

    iRet = Strlen(Arr);

    cout <<"Charecters Are String is :" <<iRet <<"\n";
    
    return 0;
}