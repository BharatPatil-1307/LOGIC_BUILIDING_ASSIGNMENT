//  Input :

//  3   2   5   9
//  4   3   2   2
//  8   4   1   5 
//  3   9   7   5

//  OutPut : 12

import java.util.*;

class Assignment1
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
    
        int iSum = 0;
        for(int i = 0; i < iRows; i++)
        {
            iSum += Arr[i][i];
        }

        System.out.println("Diagonal Sum is : " + iSum);

    }
}