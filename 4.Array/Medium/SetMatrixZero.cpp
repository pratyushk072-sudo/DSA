#include <iostream>
#include <vector>
using namespace std;

// Brute Force Solution

void markRow(vector<vector<int>> &matrix, int rowIndex, int col)
{
    for (int j = 0; j < col; j++)
    {
        if (matrix[rowIndex][j] != 0)
        {
            matrix[rowIndex][j] = -1;
        }
    }
}

void markCol(vector<vector<int>> &matrix, int colIndex, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][colIndex] != 0)
        {
            matrix[i][colIndex] = -1;
        }
    }
}

int main()
{
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of column: ";
    cin >> col;

    vector<vector<int>> matrix(row, vector<int>(col));

    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                markRow(matrix, i, col);
                markCol(matrix, j, row);
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }

    cout << "Final Matrix:\n";

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
}
