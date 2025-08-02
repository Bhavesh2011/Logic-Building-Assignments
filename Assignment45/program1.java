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
        System.out.println("Elements of the matrix are:");
        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public void Transpose() {
        int[][] Trans = new int[Arr[0].length][Arr.length];

        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) {
                Trans[j][i] = Arr[i][j];
            }
        }

        System.out.println("Transpose of the matrix is:");
        for (int i = 0; i < Trans.length; i++) {
            for (int j = 0; j < Trans[i].length; j++) {
                System.out.print(Trans[i][j] + "\t");
            }
            System.out.println();
        }
    }
}

class program1
 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows:");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns:");
        int iCol = sobj.nextInt();

        MatrixX mobj = new MatrixX(iRow, iCol);

        mobj.Accept();

        System.out.println("Original Matrix:");
        mobj.Display();

        mobj.Transpose();
    }
}
