#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate determinant using Gaussian elimination
double determinant(int matrix[10][10], int n) {
    double det = 1; // Initialize determinant as 1
    int temp[10][10];

    // Copy the matrix to a temporary matrix to avoid modifying the original
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[i][j] = matrix[i][j];

    // Convert to upper triangular matrix
    for (int i = 0; i < n; i++) {
        // Find the pivot element
        if (temp[i][i] == 0) {
            int swapRow = i + 1;
            while (swapRow < n && temp[swapRow][i] == 0)
                swapRow++;

            // If no nonzero pivot is found, determinant is 0
            if (swapRow == n)
                return 0;

            // Swap rows
            for (int j = 0; j < n; j++)
                swap(temp[i][j], temp[swapRow][j]);

            // Change the sign of determinant when swapping rows
            det *= -1;
        }

        // Perform row operations to form upper triangular matrix
        for (int j = i + 1; j < n; j++) {
            if (temp[j][i] != 0) {
                double factor = (double)temp[j][i] / temp[i][i];
                for (int k = i; k < n; k++)
                    temp[j][k] -= factor * temp[i][k];
            }
        }

        // Multiply the diagonal elements
        det *= temp[i][i];
    }

    return det;
}

int main() {
    int n;
    int matrix[10][10];

    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    double det = determinant(matrix, n);
    cout << "Determinant of the matrix: " << det << endl;

    return 0;
}
