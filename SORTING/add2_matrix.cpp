#include <iostream>
using namespace std;

void add_matrix(int** arr, int rows, int cols, int** arr2, int rows2, int cols2) {
    if (rows != rows2 || cols != cols2) {
        cout << "Matrix dimensions do not match" << endl;
        return;
    }

    // Dynamically allocate result matrix
    int** ans = new int*[rows];
    for (int i = 0; i < rows; i++) {
        ans[i] = new int[cols];
    }

    // Add matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            ans[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    // Print result
    cout << "Sum of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        delete[] ans[i];
    }
    delete[] ans;
}

int main() {
    int rows, cols, rows2, cols2;
    cout << "Enter rows and columns of first matrix: ";
    cin >> rows >> cols;

    cout << "Enter rows and columns of second matrix: ";
    cin >> rows2 >> cols2;

    // Allocate first matrix
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    // Allocate second matrix
    int** arr2 = new int*[rows2];
    for (int i = 0; i < rows2; i++) {
        arr2[i] = new int[cols2];
    }

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> arr2[i][j];
        }
    }

    // Call addition function
    add_matrix(arr, rows, cols, arr2, rows2, cols2);

    // Clean up input matrices
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    for (int i = 0; i < rows2; i++) {
        delete[] arr2[i];
    }
    delete[] arr2;

    return 0;
}
