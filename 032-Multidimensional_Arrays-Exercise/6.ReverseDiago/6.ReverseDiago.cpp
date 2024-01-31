#include <iostream>
#include <vector>
using namespace std;

void readMatrix(vector<vector<int> >& m, int& r, int& c) {
	cin >> r >> c;

	m.resize(r);
	for (int row = 0; row < r; row++) {
		m[row].resize(c);
		for (int col = 0; col < c; col++) {
			cin >> m[row][col];
		}
	}
}

void printDiag(const vector<vector<int> >& m, int startR, int startC) {
	int col = m[startR].size();
	while (startR >= 0 && startC <= col-1) {
		cout << m[startR][startC] << ' ';
		startR--;
		startC++;
	}
}

int main()
{
	int r, c, sumOfSquares = 0;

 	vector<vector<int> > matrix;
	readMatrix(matrix, r, c);

	for (int col = c - 1; col >= 0; col--) {
		printDiag(matrix, r-1, col);
		cout << endl;
	}

	for (int row = r - 2; row >= 0; row--) {
		printDiag(matrix, row, 0);
		cout << endl;
	}

	return 0;
}
