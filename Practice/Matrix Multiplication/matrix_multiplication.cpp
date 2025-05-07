#include <iostream>
using namespace std;

int main () {
    taking_dimesions :
    int row_of_matrix_a, col_of_matrix_a;
    cout << "Dimension of Matrix 'A' (row x col) = ";
    cin >> row_of_matrix_a >> col_of_matrix_a;

    int row_of_matrix_b, col_of_matrix_b;
    cout << "Dimension of Matrix 'B' (row x col) = ";
    cin >> row_of_matrix_b >> col_of_matrix_b;

    if (col_of_matrix_a != row_of_matrix_b) {
        cout << endl << "Invalid Matrix Dimension for Multiplication !" << endl;
        cout << ">>> Matrix 'A' = row_1 x col_1" << endl;
        cout << ">>> Matrix 'B' = row_2 x col_2" << endl;
        cout << "Here, 'col_1' and 'row_2' should be equal. Enter Again !!!" << endl << endl;
        goto taking_dimesions;
    }

    int matrix_a [row_of_matrix_a] [col_of_matrix_a];
    cout << endl << "Enter The Matrix 'A' :" << endl << endl;
    for (int row = 0; row < row_of_matrix_a; row++) {
        for (int col = 0; col < col_of_matrix_a; col++) {
            cout << "Matrix 'A' [" << row << "] [" << col << "] = ";
            cin >> matrix_a [row] [col];
        }
    }

    int matrix_b [row_of_matrix_b] [col_of_matrix_b];
    cout << endl << "Enter The Matrix 'B' :" << endl << endl;
    for (int row = 0; row < row_of_matrix_b; row++) {
        for (int col = 0; col < col_of_matrix_b; col++) {
            cout << "Matrix 'B' [" << row << "] [" << col << "] = ";
            cin >> matrix_b [row] [col];
        }
    }

    cout << endl << "Matrix 'A' [" << row_of_matrix_a << "] [" << col_of_matrix_a << "]" << endl << endl;
    for (int row = 0; row < row_of_matrix_a; row++) {
        for (int col = 0; col < col_of_matrix_a; col++) {
            cout << matrix_a [row] [col] << '\t';
        }
        cout << endl;
    }

    cout << endl << "Matrix 'B' [" << row_of_matrix_b << "] [" << col_of_matrix_b << "]" << endl << endl;
    for (int row = 0; row < row_of_matrix_b; row++) {
        for (int col = 0; col < col_of_matrix_b; col++) {
            cout << matrix_b [row] [col] << '\t';
        }
        cout << endl;
    }

    cout << endl << "Matrix 'R' [" << row_of_matrix_a << "] [" << col_of_matrix_b << "]   =   Matrix 'A' [" << row_of_matrix_a << "] [" << col_of_matrix_a << "]   x   Matrix 'B' [" << row_of_matrix_b << "] [" << col_of_matrix_b << "]" << endl;
    
    int matrix_r [row_of_matrix_a] [col_of_matrix_b];

    for (int row = 0; row < row_of_matrix_a; row++) {
        for (int col = 0; col < col_of_matrix_b; col++) {
            int sum = 0;
            for (int var = 0; var < col_of_matrix_a; var++) {
                sum += ( matrix_a [row] [var] * matrix_b [var] [col] );
            }
            matrix_r [row] [col] = sum;
        }
    }

    cout << endl << "Matrix 'R' [" << row_of_matrix_a << "] [" << col_of_matrix_b << "]" << endl << endl;
    for (int row = 0; row < row_of_matrix_a; row++) {
        for (int col = 0; col < col_of_matrix_b; col++) {
            cout << matrix_r [row] [col] << '\t';
        }
        cout << endl;
    }

    return 0;
}