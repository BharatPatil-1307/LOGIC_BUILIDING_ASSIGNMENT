#include<iostream>
using namespace std;

void Display(int No)
{
    if(No > 0)
    {
        cout << No;
        if(No > 1)
            cout << "\t*\t";
        Display(No - 1);
    }
}

int main()
{
    int iValue = 0;

    cout <<"Enter the number :";
    cin >>iValue;

    Display(iValue);
    cout <<"\n";

    return 0;
}