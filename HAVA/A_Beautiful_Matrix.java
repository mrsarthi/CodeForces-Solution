package HAVA;

import java.util.*;

public class A_Beautiful_Matrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int row = 0, col = 0;

        int arr[][] = new int[5][5];
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (arr[i][j] == 1) {
                    row = i;
                    col = j;
                }
            }
        }

        System.out.println(Math.abs(2 - row) + Math.abs(2 - col));
    }
}

// import java.util.Scanner;

// public class Main {
// public static void main(String[] args) {
// Scanner scanner = new Scanner(System.in);

// int[][] matrix = new int[5][5];
// int rowOfOne = 0;
// int colOfOne = 0;

// // Read input matrix and find the position of 1
// for (int i = 0; i < 5; i++) {
// for (int j = 0; j < 5; j++) {
// matrix[i][j] = scanner.nextInt();
// if (matrix[i][j] == 1) {
// rowOfOne = i;
// colOfOne = j;
// }
// }
// }

// // Calculate the number of moves to reach the center (2, 2)
// int moves = Math.abs(rowOfOne - 2) + Math.abs(colOfOne - 2);
// System.out.println(moves);
// }
// }
