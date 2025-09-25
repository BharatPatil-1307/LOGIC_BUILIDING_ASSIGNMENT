// Input :
//  1   1   1   1
//  2   2   2   2
//  3   3   3   3

import java.util.*;

class Pattern
{
    public void Pattern(int Row, int Col)
    {
        for(int i = 1; i <= Row; i++)
        {
            for(int j = 1; j <= Col; j++)
            {
                System.out.print(i +"\t");
            }
            System.out.println();
        }
    }
}

class Assignment5
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