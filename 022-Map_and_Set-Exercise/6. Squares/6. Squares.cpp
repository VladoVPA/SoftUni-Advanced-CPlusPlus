#include <iostream>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int main()
{
	string line;
	getline(cin, line);
	istringstream input(line);

	map<int, int> numList;

	int num;
	while (input >> num) {
		int n = sqrt(num);
		if(n*n == num)
			numList[num]++;
	}

	auto itr = numList.rbegin();
	for (; itr != numList.rend(); itr++) {
		int repeat = itr->second;
		for(int ind=1; ind <= repeat; ind++)
		cout << itr -> first << ' ';
	}
		
	cout << endl;
	return 0;

}
