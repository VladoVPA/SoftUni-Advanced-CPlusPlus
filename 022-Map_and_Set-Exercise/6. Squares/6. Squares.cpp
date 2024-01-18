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

	map<int, int> numList;

	double num;
	while (input >> num) {

		numList[num]++;
	}
}
