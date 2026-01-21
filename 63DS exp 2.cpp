#include <iostream>
using namespace std;

int main() {
    int r, c;
    int A[10][10], B[10][10], C[10][10];

    // Matrix size
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    // First matrix
    cout << "Enter first matrix:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> A[i][j];

    // Second matrix
    cout << "Enter second matrix:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> B[i][j];

    // Addition
    cout << "\nAddition:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << endl;
    }

    // Subtraction
    cout << "\nSubtraction:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << A[i][j] - B[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose of first matrix
    cout << "\nTranspose of first matrix:\n";
    for(int j = 0; j < c; j++) {
        for(int i = 0; i < r; i++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // Reverse of first matrix
    cout << "\nReverse of first matrix:\n";
    for(int i = r - 1; i >= 0; i--) {
        for(int j = 0; j < c; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // Identity matrix
    int n;
    cout << "\nEnter size of identity matrix: ";
    cin >> n;

    cout << "\nIdentity Matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) cout << "1 ";
            else cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}