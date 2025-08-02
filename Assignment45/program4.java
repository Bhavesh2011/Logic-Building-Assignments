import java.util.*;

class MatrixX {
    private int Arr[][];

    public MatrixX(int A, int B) {
        Arr = new int[A][B];
    }

    public void Accept() {
        System.out.println("Please enter the elements of the matrix:");
        Scanner sobj = new Scanner(System.in);

        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display() {
        System.out.println("Matrix elements:");
        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public boolean ChkIdentity() {
        if (Arr.length != Arr[0].length) {
            return false; // Not a square matrix
        }

        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) {
                if (i == j && Arr[i][j] != 1) {
                    return false; // Diagonal element is not 1
                }
                else if (i != j && Arr[i][j] != 0) {
                    return false; // Non-diagonal element is not 0
                }
            }
        }

        return true; // Passed all checks
    }
}

public class program4 
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns:");
        int iCol = sobj.nextInt();

        MatrixX mobj = new MatrixX(iRow, iCol);

        mobj.Accept();

        System.out.println("Matrix:");
        mobj.Display();

        boolean bRet = mobj.ChkIdentity();
        if (bRet) {
            System.out.println("Result: True (It is an Identity Matrix)");
        } else {
            System.out.println("Result: False (Not an Identity Matrix)");
        }
    }
}
