import java.util.*;

class Assignment2
{
    public static void ReverseRow(int Arr[][], int Row, int Col)
    {
        for (int i = 0; i < Row; i++)
        {
            int start = 0;
            int end = Col - 1;

            while (start < end)
            {
                int temp = Arr[i][start];
                Arr[i][start] = Arr[i][end];
                Arr[i][end] = temp;

                start++;
                end--;
            }
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter the Columns :");
        int iCol = sobj.nextInt();

        int Arr[][] = new int[iRow][iCol];

        System.out.println("Enter the Elements :");
        for (int i = 0; i < iRow; i++)
        {
            for (int j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Original Matrix:");
        for (int i = 0; iRow > i; i++)
        {
            for (int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }

        ReverseRow(Arr, iRow, iCol);

        System.out.println("Matrix After Reversing Each Row:");
        for (int i = 0; i < iRow; i++)
        {
            for (int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }
}
