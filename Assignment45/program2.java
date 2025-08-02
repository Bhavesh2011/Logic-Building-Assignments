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

    public void ReverseRow() {
        for (int i = 0; i < Arr.length; i++) {
            int start = 0;
            int end = Arr[i].length - 1;

            while (start < end) {
                int temp = Arr[i][start];
                Arr[i][start] = Arr[i][end];
                Arr[i][end] = temp;
                start++;
                end--;
            }
        }
    }
}

public class program2
 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns:");
        int iCol = sobj.nextInt();

        MatrixX mobj = new MatrixX(iRow, iCol);

        mobj.Accept();

        System.out.println("Original Matrix:");
        mobj.Display();

        mobj.ReverseRow();

        System.out.println("Matrix After Reversing Each Row:");
        mobj.Display();
    }
}
