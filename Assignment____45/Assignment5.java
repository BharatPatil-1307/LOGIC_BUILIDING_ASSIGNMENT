import java.util.*;

class MatrixSparse
{
    public static boolean ChkSparse(int Arr[][], int iRow, int iCol)
    {
        int zeroCount = 0;
        int nonZeroCount = 0;

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if(Arr[i][j] == 0)
                {
                    zeroCount++;
                }
                else
                {
                    nonZeroCount++;
                }
            }
        }

        return (zeroCount > nonZeroCount);
    }
}

class Assignment5
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns :");
        int iCol = sobj.nextInt();

        int Arr[][] = new int[iRow][iCol];

        System.out.println("Enter the elements of matrix :");
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Matrix Elements Are :");
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j] +"\t");
            }
            System.out.println();
        }

        boolean bRet = MatrixSparse.ChkSparse(Arr, iRow, iCol);

        if(bRet)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
    }
}
