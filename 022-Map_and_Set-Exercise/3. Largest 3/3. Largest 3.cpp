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

	int index = 3;
	if (numList.size() < index)
		index = numList.size();

	auto itr = numList.rbegin();
	for (; itr != numList.rend(); itr++) {
		if (index) {
			cout << *itr << ' ';
			index--;
		}
		else
			break;
	}

	cout << endl;
	return 0;
}
