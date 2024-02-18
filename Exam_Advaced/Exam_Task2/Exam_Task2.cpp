#include <iostream>
#include <map>  //#include <set>
#include <queue> // #include<stack>
#include <string>
#include <sstream>
#include <vector>	//#include <utility>  // for pairs !!!!!!
#include <algorithm>
#include <cctype>

using namespace std;

const int rows = 8;
const int cols = 8;

void readMatrix(char(&m)[rows][cols]) {
	for (int r = 0; r < rows; r++) {
		string line;
		getline(cin, line);
		for (int c = 0; c < cols; c++)
			m[r][c]=line[c];
	}
}

void findElements(const char(&m)[rows][cols], string& w, string& b) {
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < cols; c++)
			if (isupper(m[r][c]))
				w.push_back(m[r][c]);
			else if (islower(m[r][c]))
				b.push_back(m[r][c]);
			
	}
}

void printInReverce(const char(&m)[rows][cols]) {
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < cols; c++) {
			char x = m[r][c];
			if (isupper(x))
				cout << char(tolower(x));
			else if (islower(x))
				cout << char(toupper(x));
			else
				cout << x;
		}
		cout << endl;
	}
}

int main()
{
	char matrix[rows][cols];
	readMatrix(matrix);

	string white="", black = "";
	findElements(matrix, white, black);

	cout << white << endl << black << endl;

	printInReverce(matrix);


	return 0;
}
