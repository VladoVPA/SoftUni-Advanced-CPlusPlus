#include <iostream>
using namespace std;

void readMatrix(int m[10][10], int& r, int& c) {
	cin >> r >> c;
	
	for (int row = 0; row < r; row++) 
		for (int col = 0; col < c; col++)
			cin >> m[row][col];
}
int main()
{
	int r, c, searchNum;
	int matrix[10][10] = {};

	readMatrix(matrix, r, c);
	cin >> searchNum;

	bool isFound = false;
	for (int row = 0; row < r; row++)
		for (int col = 0; col < c; col++) {
			if (matrix[row][col] == searchNum) {
				cout << row << ' ' << col << endl;
				isFound = true;
			}
		}

	if (!isFound)
		cout << "not found" << endl;

	return 0;
}
