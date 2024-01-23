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

		cin >> quantity;

		auto insertResult = production.insert({ source, quantity });
		
		if(insertResult.second)
			order.push_back(source);
		else
			insertResult.first -> second += quantity;
	}

	for (string name : order)
		cout << name << " -> " << production[name] << endl;

	return 0;
}
