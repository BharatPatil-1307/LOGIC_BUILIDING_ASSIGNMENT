//  Output :
// 1    2   3   4 
// 5    6   7   8 
// 9    10  11  12
// 13   14  15  16


import java.util.*;

class Pattern
{
    public void Pattern(int iRow , int iCol)
    {
        int Num = 1;
        for(int i = 1; i <= iRow; i++) 
        {
            for(int j = 1; j <= iCol; j++,Num++)
            {
                System.out.print(Num + "\t");
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

        System.out.println("Enter Number of Rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter Number of Columns : ");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue1 , iValue2);

    }
}