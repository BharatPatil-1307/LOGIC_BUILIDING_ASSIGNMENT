#include<iostream>
using namespace std;

void Display(int No)
{
    static int i = 1;
    static char ch = 'A';

    if(i <= No)
    {
        cout << ch <<"\t";
        i++;
        ch++;
        Display(No);
    }
    
}

int main()
{
    int iValue = 0;

    cout << "Enter the Number :";
    cin >> iValue;

    Display(iValue);

    return 0;
}