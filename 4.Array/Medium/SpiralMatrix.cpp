#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the numbers of rows: ";
    cin >> rows;
    cout << "Enter the numbers of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int top = 0, right = cols - 1, bottom = rows - 1, left = 0;

    cout << "Spiral traversal: " << endl;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << matrix[top][i] << " ";
        }

        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << matrix[i][right] << " ";
        }

        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << matrix[bottom][i] << " ";
            }

            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << matrix[i][left] << " ";
            }

            left++;
        }
    }
}