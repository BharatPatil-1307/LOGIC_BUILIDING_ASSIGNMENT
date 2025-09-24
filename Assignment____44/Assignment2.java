//  Input : 9

//  3   2   5   9
//  4   3   2   2
//  8   4   1   9
//  3   9   7   5

//  OutPut : 3

import java.util.*;

class Assignment2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of Rows :");
        int iRows = sobj.nextInt();

        System.out.println("Enter the number of Colomus :");
        int iCols = sobj.nextInt();

        int Arr[][] = new int[iRows][iCols];

        System.out.println("Enter the Elements of the matrix :");
        for(int i = 0; i < iRows; i++)
        {
            for(int j = 0; j < iCols; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Elements Matrix are :");
        for(int i = 0; i < iRows; i++)
        {
            for(int j = 0; j < iCols; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println("");
        }
    
        System.out.println("Enter the Number that Number Check Frequency of that number :");
        int Freq = sobj.nextInt();

        int iCount = 0;
        for(int i = 0; i < iRows; i++)
        {
            for(int j = 0; j < iCols; j++)
            {
                if(Arr[i][j] == Freq)
                {
                    iCount++;
                }
            }
        }

        System.out.println("Frequency of that number is :" +iCount);

    }
}