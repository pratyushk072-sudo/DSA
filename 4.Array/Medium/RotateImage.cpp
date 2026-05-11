#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    cout << "Enter the value of the n for the matrix(n x n): ";
    cin >> a;

    int rows = a;
    int cols = a;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the elements of the array: ";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Brute Force Method
    /*
    vector<vector<int>> ans (rows,vector<int> (cols));

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            ans[j][a - 1 - i] = matrix[i][j];
        }
    }

    cout << "The matrix after rotation: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << ans[i][j] << " ";
        }

        cout << " " <<endl;
    }
    return 0;
    */

    // Optimal code

    for (int i = 0; i < a; i++)
    {

        for (int j = i + 1; j < a; j++)
        {

            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < a; i++)
    {

        reverse(matrix[i].begin(), matrix[i].end());
    }

    cout << "Matrix after rotation; " << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}