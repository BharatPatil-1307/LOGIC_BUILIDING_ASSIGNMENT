import java.util.*;

class ReverseColums
{
    public void ReverseColums(int Arr[][],int Row, int Col)
    {
        for(int j = 0; j < Col; j++)
        {
            int start = 0;
            int end = Row - 1;

            while(start < end)
            {
                int temp = Arr[start][j];
                Arr[start][j] = Arr[end][j];
                Arr[end][j] = temp;

                start++;
                end--;
            }
        }
    }
}
class Assignment3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter the Colums :");
        int iCol = sobj.nextInt();

        int Arr[][] = new int [iRow][iCol];
        System.out.println("Enter the Marix :");
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
        System.out.println("Matrix Elements is :");
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j] +"\t");
            }
            System.out.println();
        }

        ReverseColums robj  = new ReverseColums();
        robj.ReverseColums(Arr,iRow,iCol);

        System.out.println("\nMatrix After Reversing Columns:");
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }

        sobj.close();

    }
}