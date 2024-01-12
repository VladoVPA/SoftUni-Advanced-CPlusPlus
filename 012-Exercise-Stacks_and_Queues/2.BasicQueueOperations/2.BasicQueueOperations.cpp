#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <queue>
#include <climits>
using namespace std;

int main()
{
	int toPush, toPop, num, minNum = INT_MAX;
	cin >> toPush >> toPop >> num;

	queue<int> numbers;

	string line;
	getline(cin, line);
	for (int i = 0; i < toPush; i++) {
		int x;
		cin >> x;
		numbers.push(x);
	}

	for (int i = 0; i < toPop; i++)
		numbers.pop();

	if (numbers.empty()) {
		cout << 0 << endl;
		return 0;
	}

	while (!numbers.empty()) {
		int temp = numbers.front();
		numbers.pop();
		if (temp == num) {
			cout << "true" << endl;
			return 0;
		}
		else {
			if (temp < minNum)
				minNum = temp;
		}
	}

	cout << minNum << endl;
	return 0;

}
