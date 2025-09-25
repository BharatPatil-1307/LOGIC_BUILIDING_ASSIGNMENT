import java.util.*;

class Assignment1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter the Columns :");
        int iCol = sobj.nextInt();

        System.out.println("Enter the Elements Are :");
        int Arr[][] = new int[iRow][iCol];
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Matrix is :");
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }

        System.out.println("Transpose of Matrix:");
        for(int i = 0; i < iCol; i++) 
        {
            for(int j = 0; j < iRow; j++) 
            {
                System.out.print(Arr[j][i] + "\t");
            }
            System.out.println();
        }
    }
}
