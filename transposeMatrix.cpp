#include <iostream>
using namespace std;

void transposeMatrix(int matrix[][100], int transposed[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    
    int matrix[100][100], transposed[100][100];
    
    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "Original Matrix:" << endl;
    printMatrix(matrix, rows, cols);
    
    transposeMatrix(matrix, transposed, rows, cols);
    
    cout << "Transposed Matrix:" << endl;
    printMatrix(transposed, cols, rows);
    
    return 0;
}
