#include <iostream>
#include <set>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string line;
	getline(cin, line);
	istringstream input(line);

	set<double> numList;

	double num;
	while (input >> num) {
		numList.insert(num);
	}

	bool isFirst = true;
	for (double n : numList) {
		if (isFirst)
			isFirst = false;
		else
			cout << " <= ";

		cout << n;
	}
	cout << endl;
	return 0;
}
