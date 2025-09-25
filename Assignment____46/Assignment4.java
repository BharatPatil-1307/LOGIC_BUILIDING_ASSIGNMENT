//  Output :
//  4   4   4   4
//  3   3   3   3
//  2   2   2   2
//  1   1   1   1


import java.util.*;

class Pattern
{
    public void Pattern(int iRow , int iCol)
    {
        for(int i = iRow; i >= 1; i--) 
        {
            for(int j = 1; j <= iCol; j++)
            {
                System.out.print(i + "\t");
            }
            System.out.println();
        }
    }
}
class Assignment4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter Number of Columns : ");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue1 , iValue2);

    }
}