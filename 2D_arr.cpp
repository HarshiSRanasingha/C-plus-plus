#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input matrix size
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    // Input first matrix
    cout << "\nEnter elements of first matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // Input second matrix
    cout << "\nEnter elements of second matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Add matrices
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display result
    cout << "\nSum of the matrices:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}