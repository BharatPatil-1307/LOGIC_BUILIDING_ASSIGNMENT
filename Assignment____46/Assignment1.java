import java.util.*;

class Pattern
{
    public static void Pattern(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow ; i++)
        {
            char ch = 'A';            
            for(int j = 1 ; j <= iCol; j++)
            {
                System.out.print(ch+"\t");
                ch++;
            }
            System.out.println();
        }
    }
}

class Assignment1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Rows :");
        int Row = sobj.nextInt();

        System.out.println("Enter the Colums :");
        int Col = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(Row, Col);

    }
}