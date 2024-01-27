#include <iostream>
#include <vector>
using namespace std;

void readMatrix(vector<vector<char> > &m, int& r, int& c) {
	cin >> r >> c;


	m.resize(r);
	for (int row = 0; row < r; row++) {
		m[row].resize(c);
		for (int col = 0; col < c; col++){
			cin >> m[row][col];
		}
	}
}
int main()
{
    int r, c, sumOfSquares=0;

    vector<vector<char> > matrix;
	readMatrix(matrix, r, c);

	for (int row = 0; row < r-1; row++) {
		for (int col = 0; col < c-1; col++) {
			if (matrix[row][col] == matrix[row][col + 1] &&
				matrix[row][col] == matrix[row + 1][col] &&
				matrix[row][col] == matrix[row + 1][col + 1])
				sumOfSquares++;
		}
	}

	cout << sumOfSquares << endl;

	return 0;
}
