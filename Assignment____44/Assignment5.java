import java.util.*;

class Assignment5
{
    public static void SwapRows(int Arr[][], int iRow, int iCol)
    {
        for(int i = 0; i < iRow - 1; i += 2)
        {
            for(int j = 0; j < iCol; j++)
            {
                int temp = Arr[i][j];
                Arr[i][j] = Arr[i+1][j];
                Arr[i+1][j] = temp;
            }
        }
    }
    public static void PrintMatrix(int Arr[][], int iRow, int iCol)
    {
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows :");
        int iRows = sobj.nextInt();

        System.out.println("Enter number of columns :");
        int iCols = sobj.nextInt();

        int Arr[][] = new int[iRows][iCols];

        System.out.println("Enter the elements of the matrix :");
        for(int i = 0; i < iRows; i++)
        {
            for(int j = 0; j < iCols; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        SwapRows(Arr, iRows, iCols);

        System.out.println("Matrix after swapping consecutive rows :");
        PrintMatrix(Arr, iRows, iCols);
    }
}
