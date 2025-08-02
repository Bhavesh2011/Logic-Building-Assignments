import java.util.*;

class MatrixX
{
    private int Arr[][];

    public MatrixX(int A, int B)
    {
        Arr = new int[A][B];
    }
    public void Accept()
    {
        System.out.println("Please enter the elements of matrix");

        Scanner sobj = new Scanner(System.in);
        int i = 0;
        int j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j< Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
            System.out.println("Elements of the matrix are : ");

            int i = 0;
            int j = 0;

            for(i = 0; i < Arr.length; i++)
            {
                for(j = 0; j< Arr[i].length; j++)
                {
                System.out.print(Arr[i][j]+"\t");
                }
                System.out.println();
            }

    }

    public int DiagonalAdd()
    {
        int i = 0, j = 0;
        int iSum = 0;

        for(i = 0;i < Arr.length; i++)
        {
            for(j = 0;j< Arr[i].length; j++)
            {
 
                if(i == j)
                {
                    iSum = iSum + Arr[i][j];
                }

            }
        }


        return iSum;
    }

    public int Frequency(int iNo)
    {
        int i = 0, j = 0;
        int Freq = 0;

        for(i = 0;i < Arr.length; i++)
        {
            for(j = 0;j< Arr[i].length; j++)
            {
                if(Arr[i][j] == iNo)
                {
                    Freq++;
                }

            }
        }

        return Freq;
    }

    public int Maximum()
    {
        int i = 0, j = 0;
        int iMax = 0;

        for(i = 0;i < Arr.length; i++)
        {
            for(j = 0;j< Arr[i].length; j++)
            {
                if(i == j)
                {
                    if(Arr[i][j] > iMax)
                    {
                        iMax = Arr[i][j];
                    }
                }

            }
        }

        return iMax;
    }


}


class program3
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;
        int iValue = 0;
        
        
        System.out.println("Enter The Number of Rows");
        int iRow = sobj.nextInt();
        System.out.println("Enter The Number of Columns");
        int iCol = sobj.nextInt();

        MatrixX mobj = new MatrixX(iRow, iCol); 
        mobj.Accept();

        iRet = mobj.Maximum();
        System.out.println("The Maximum From Daigonal : "+iRet);
    }

}