#include <iostream>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	string line;
	getline(cin, line);
	istringstream input(line);

	multiset<int, greater<int>> numList;

	int num;
	while (input >> num) {
		int n = sqrt(num);
		if (n * n == num)
			numList.insert(num);
	}

	for (int number : numList) {
		cout << number << ' ';
	}

	cout << endl;
	return 0;

}
