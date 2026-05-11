#include <bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row) {

    long long ans = 1;
    vector<int> ansRow;

    ansRow.push_back(1);

    for(int col = 1; col < row; col++) {

        ans = ans * (row - col);
        ans = ans / col;

        ansRow.push_back(ans);
    }

    return ansRow;
}

vector<vector<int>> generate(int numRows) {

    vector<vector<int>> ans;

    for(int i = 0; i < numRows; i++) {
        ans.push_back(generateRow(i + 1));
    }

    return ans;
}

int main() {

    int numRows;

    cout << "Enter number of rows: ";
    cin >> numRows;

    vector<vector<int>> result = generate(numRows);

    for(auto row : result) {

        for(auto val : row) {
            cout << val << " ";
        }

        cout << endl;
    }

    return 0;
}