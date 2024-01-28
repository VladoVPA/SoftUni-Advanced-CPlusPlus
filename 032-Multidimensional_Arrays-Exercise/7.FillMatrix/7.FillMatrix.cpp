#include <iostream>
#include <string>
#include <vector>
using namespace std;

void methodA(vector<vector <int>> &m, int N) {
	int index = 1;
	m.resize(N, vector<int>(N));

	for (int col = 0; col < N; col++)
		for (int row = 0; row < N; row++)
			m[row][col] = index++;
}

void methodB(vector<vector <int>>& m, int N) {
	int index = 1;
	m.resize(N, vector<int>(N));

	for (int col = 0; col < N; col++) {
		if(col % 2 == 0)
			for (int row = 0; row < N; row++)
				m[row][col] = index++;
		else
			for (int row = N-1; row >= 0; row--)
				m[row][col] = index++;
	}

}

void printMatrix(const vector<vector <int>>& m, int N) {
	for (int row = 0; row < N; row++) {
		for (int col = 0; col < N; col++)
			cout << m[row][col] << ' ';
		cout << endl;
	}
}

int main()
{
	int num;
	string method;

	cin >> num; 
	getline(cin, method);

	vector<vector <int>> matrix;

	if (method == ", A")
		methodA(matrix, num);
	else
		methodB(matrix, num);

	printMatrix(matrix, num);

	return 0;
}
