#include <iostream>
#include <vector>

using  namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;

    vector < vector<int> > matrix;

    matrix.resize(rows);
    for (int i = 0; i < rows; i++) {
        matrix[i].resize(columns);
        for (int j = 0; j < columns; j++)
            cin >> matrix[i][j];
    }

    for (size_t col = 0; col < columns; col++) {
        int tempSum = 0;
        for (size_t row = 0; row < rows; row++) {
        tempSum += matrix[row][col];
        }
    cout << tempSum << endl;
    }

    return 0;
    }
