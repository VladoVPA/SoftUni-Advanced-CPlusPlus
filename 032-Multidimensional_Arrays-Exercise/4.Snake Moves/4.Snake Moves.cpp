#include <iostream>
#include <vector>
#include<string>
using namespace std;

void printVector(const vector <vector<char>>& v, int rows, int cols) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++)
            cout << v[r][c];
        cout << endl;
    }
}

int main()
{
    int rows, cols;
    string word;
    cin >> rows >> cols >> word;

    vector <vector<char>> snakeMatrix(rows, vector<char>(cols));

    int index = 0;
    //int direction = 1;
     // int c = 0;

    for (int r = 0; r < rows; r++) {
        if (r % 2 == 0)
            for (int c = 0; c < cols; c++) {
                snakeMatrix[r][c] = word[index++];
                if (index == word.size())
                    index = 0;
            }
        else
            for (int c = cols-1; c >= 0; c--) {
                snakeMatrix[r][c] = word[index++];
                if (index == word.size())
                    index = 0;
            }
    }

    printVector(snakeMatrix, rows, cols);

    return 0;
}
