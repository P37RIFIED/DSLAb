#include <iostream>

using namespace std;

// Define matrix sizes
const int ROWS = 3;
const int COLS = 3;

// Define matrices as boolean arrays
bool A[ROWS][COLS] = {{1, 0, 1}, {0, 1, 0}, {1, 1, 0}};
bool B[ROWS][COLS] = {{0, 1, 0}, {1, 0, 1}, {0, 1, 1}};
bool C[ROWS][COLS] = {{0, 1, 1}, {1, 0, 0}, {0, 1, 0}};

// Function to print matrix
void printMatrix(bool matrix[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to perform join of two matrices
void matrixJoin(bool matrix1[][COLS], bool matrix2[][COLS])
{
    bool result[ROWS][COLS];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            result[i][j] = matrix1[i][j] || matrix2[i][j];
        }
    }
    printMatrix(result);
}

// Function to perform product of two matrices
void matrixProduct(bool matrix1[][COLS], bool matrix2[][COLS])
{
    bool result[ROWS][COLS];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            bool temp = false;
            for (int k = 0; k < ROWS; k++)
            {
                temp = temp || (matrix1[i][k] && matrix2[k][j]);
            }
            result[i][j] = temp;
        }
    }
    printMatrix(result);
}

// Function to perform Boolean product of two matrices
void matrixBooleanProduct(bool matrix1[][COLS], bool matrix2[][COLS])
{
    bool result[ROWS][COLS];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            result[i][j] = matrix1[i][j] && matrix2[i][j];
        }
    }
    printMatrix(result);
}

// Main function
int main()
{
    cout << "Matrix A:" << endl;
    printMatrix(A);

    cout << "Matrix B:" << endl;
    printMatrix(B);

    cout << "Matrix C:" << endl;
    printMatrix(C);

    cout << "Join of A and B:" << endl;
    matrixJoin(A, B);

    cout << "Product of A and C:" << endl;
    matrixProduct(A, C);

    cout << "Boolean Product of B and C:" << endl;
    matrixBooleanProduct(B, C);

    return 0;
}
