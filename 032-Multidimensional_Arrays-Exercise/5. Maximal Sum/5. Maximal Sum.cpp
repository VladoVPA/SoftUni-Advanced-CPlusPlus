#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector< vector <int> > matrix (N, vector<int>(M)); 

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> matrix[i][j];

	int maxSum = 0;
	int indR = 0, indC = 0;

	for (int r = 0; r <= N-3; r++)
		for (int c = 0; c <= M - 3; c++) {
			int tempSum = 0;
			for (int row = r; row <= r+2; row++)
				for (int col = c; col <= c + 2; col++) {
					tempSum += matrix[row][col];
				}
			if (tempSum > maxSum) {
				maxSum = tempSum;
				indR = r;
				indC = c;
			}
		}

	cout << "Sum = " << maxSum << endl;
	for (int row = indR; row <= indR + 2; row++) {
		for (int col = indC; col <= indC + 2; col++) {
			cout << matrix[row][col] << " ";
		}
		cout << endl;
	}

	return 0;
}
