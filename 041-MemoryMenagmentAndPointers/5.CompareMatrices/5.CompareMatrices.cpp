#include <iostream>
#include <string>
#include <sstream>
#include <string.h>
#include <cstring>
#include <memory>

using namespace std;

int readArray(unique_ptr< unique_ptr<int[]>[]> & array, const int &rows) {
	int index = 0;

	for (int r = 0; r < rows; r++) {
		string line;
		getline(cin, line);
		istringstream buffer(line);
		
		index = 0;
		
		int num;
		while (buffer >> num) {
			array[r][index] = num;
			index++;
		}
	}

	return index;
}

bool compareArrays(unique_ptr< unique_ptr<int[]>[]>& array1, const int& rows1, const int& cols1, unique_ptr< unique_ptr<int[]>[]>& array2, const int& rows2, const int& cols2) {

	if (cols1 != cols2 || rows1!=rows2)
		return false;

	for(int ind1=0; ind1<rows1; ind1++)
		for (int ind2 = 0; ind2 < cols1; ind2++)
			if(array1[ind1][ind2] != array2[ind1][ind2])
				return false;

	return true;
}

int main()
{	int rows1, rows2;
	cin >> rows1 >> ws;

	unique_ptr< unique_ptr<int[]>[]> array1 = make_unique< unique_ptr<int[]>[]>(10);
	for (int i = 0; i < rows1; i++)
		array1[i] = make_unique <int[]>(10);

	int cols1= readArray(array1, rows1);

	cin >> rows2 >> ws;
	unique_ptr< unique_ptr<int[]>[]> array2 = make_unique< unique_ptr<int[]>[]>(10);
	for (int i = 0; i < rows2; i++)
		array2[i] = make_unique <int[]>(10);

	int cols2 = readArray(array2, rows2);

	cout << (compareArrays(array1, rows1, cols1, array2, rows2, cols2) ? "equal" : "not equal") << endl;


	/*for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			cout << array1[i][j] << ' ';
		}
		cout << endl;
	}

	for (int i = 0; i < rows2; i++) {
		for (int j = 0; j < cols2; j++) {
			cout << array2[i][j] << ' ';
		}
		cout << endl;
	}
	*/

	return 0;
}
