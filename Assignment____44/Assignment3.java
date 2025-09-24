import java.util.*;

class Assignment3
{
    public static int MaxDiagonal(int Arr[][], int iRow, int iCol)
    {
        int iMax = Arr[0][0];

        for(int i = 0; i < iRow; i++)
        {
            if(Arr[i][i] > iMax)
            {
                iMax = Arr[i][i];
            }

            if(Arr[i][iCol - 1 - i] > iMax)
            {
                iMax = Arr[i][iCol - 1 - i];
            }
        }

        return iMax;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows (and columns for square matrix) :");
        int iRows = sobj.nextInt();
        int iCols = iRows;

        int Arr[][] = new int[iRows][iCols];

        System.out.println("Enter the elements of the matrix :");
        for(int i = 0; i < iRows; i++)
        {
            for(int j = 0; j < iCols; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        int iMax = MaxDiagonal(Arr, iRows, iCols);

        System.out.println("Largest element in both diagonals is: " + iMax);
    }
}