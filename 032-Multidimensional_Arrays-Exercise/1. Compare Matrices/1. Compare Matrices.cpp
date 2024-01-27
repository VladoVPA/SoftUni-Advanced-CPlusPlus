#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void readMatrix(int m[10][10], int &r, int &col) {
	cin >> r; 
	cin.ignore();

	for (int row = 0; row < r; row++) {
		string line;
		getline(cin, line);
		istringstream buf(line);
		col = 0;

		while(buf >> m[row][col])
		col++;
	}
}

bool isOrNotEqual(int m1[10][10], int r1, int c1, int m2[10][10], int r2, int c2) {
	if (r1 != r2 || c1 != c2)
		return false;

	for (int row = 0; row < r1; row++)
		for (int col = 0; col < c1; col++)
			if (m1[row][col] != m2[row][col])
				return false;
	
	return true;
}

int main()
{
	int r1, r2, c1,c2;
	int matrix1[10][10]= {}, matrix2[10][10] = {};

	readMatrix(matrix1, r1, c1);
	readMatrix(matrix2, r2, c2);

	cout << (isOrNotEqual(matrix1, r1, c1, matrix2, r2, c2) ? "equal" : "not equal") << endl;

	return 0;
}
