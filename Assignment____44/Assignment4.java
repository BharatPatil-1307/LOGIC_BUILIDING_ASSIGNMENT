import java.util.*;

class Assignment4
{
    public static int[] AddColumn(int Arr[][], int iRow, int iCol)
    {
        int[] colSum = new int[iCol];

        for(int j = 0; j < iCol; j++) 
        {
            int sum = 0;
            for(int i = 0; i < iRow; i++)
            {
                sum += Arr[i][j];
            }
            colSum[j] = sum;
        }

        return colSum;
    }

    public static void main(String[] args)
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

        int[] colSum = AddColumn(Arr, iRows, iCols);

        System.out.println("Column sums are :");
        for(int j = 0; j < iCols; j++)
        {
            System.out.print(colSum[j] + " ");
        }
        System.out.println();
    }
}
