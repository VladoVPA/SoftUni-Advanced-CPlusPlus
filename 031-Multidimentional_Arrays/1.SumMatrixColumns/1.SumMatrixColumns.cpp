#include <iostream>
#include <vector>

using  namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;

    vector < vector<int> > matrix;

    for (int i = 0; i < rows; i++) {
        vector<int> inputRow;
        for (int j = 0; j < columns; j++) {
            int element;
            cin >> element;
            inputRow.push_back(element);
            }
        matrix.push_back(inputRow);
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
