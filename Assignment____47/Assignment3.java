// Input :
//  5   4   3   2   1
//  5   4   3   2   1
//  5   4   3   2   1

import java.util.*;

class Pattern
{
    public void Pattern(int Row, int Col)
    {
        for(int i = 1; i <= Row; i++)
        {
            for(int j = Col; j >= 1; j--)
            {
                System.out.print(j +"\t");
            }
            System.out.println();
        }
    }
}

class Assignment3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number Of Rows :");
        int iValu1 = sobj.nextInt();

        System.out.println("Enter the Number Of Columns :");
        int iValu2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValu1,iValu2);

    }
}