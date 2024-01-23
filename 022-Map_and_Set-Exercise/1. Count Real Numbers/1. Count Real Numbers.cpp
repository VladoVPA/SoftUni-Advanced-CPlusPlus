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

	map<double, int> numList;

	double num;
	while (input >> num) {
		numList[num]++;
	}

	for (const pair<double,int> & forPrint : numList)
	{
		cout << forPrint.first << " -> " << forPrint.second << endl;
	}
	/*auto itr = numList.begin();
	for (; itr != numList.end(); itr++) {
		cout << itr->first << " -> " << itr->second << endl;
	}*/

	return 0;
}

