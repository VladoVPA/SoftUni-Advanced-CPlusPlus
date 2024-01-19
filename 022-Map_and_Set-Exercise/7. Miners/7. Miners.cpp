#include <iostream>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
using namespace std;


int main()
{
	string source;
	int quantity; 

	map<string, int> production;
	vector<string> order;

	for (;;) {
		cin >> source;
		if (source == "stop")
			break;

		if (production.find(source) == production.end())
			order.push_back(source);

		cin >> quantity;

		int temp = production[source];
		production[source] = quantity + temp;
	}

	for (string name : order)
		cout << name << " -> " << production[name] << endl;

	return 0;
}
