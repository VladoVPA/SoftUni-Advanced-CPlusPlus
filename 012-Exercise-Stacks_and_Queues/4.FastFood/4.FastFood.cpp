#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <queue>
#include <climits>
using namespace std;

int main()
{
	int serves, max = INT_MIN;
	cin >> serves;
	cin.ignore();

	queue<int> orders;

	bool canServe = true;

	string line;
	getline(cin, line);
	istringstream lineBuf(line);
	
	int n;
	while (lineBuf >> n){
		orders.push(n);
		if (n > max)
			max = n;
	}

	cout << max << endl;

	while (canServe && !orders.empty()) {
		if (orders.front() <= serves) {
			serves -= orders.front();
			orders.pop();
		}
		else
			canServe = false;
	}

	if (!canServe) {
		cout << "Orders left: ";
		while (!orders.empty()) {
			cout << orders.front() << ' ';
			orders.pop();
		}
	}
	else {
		cout << "Orders complete" << endl;
	}
}
