#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <queue>
#include <climits>
using namespace std;

int main()
{
	int N;
	cin >> N;

	stack<int> numbers;
	stack<int> temp;

	bool isFirst = true;
	int min = INT_MAX;
	int max = INT_MIN;

	for (size_t ind = 1; ind <= N; ind++) {
		int command;
		cin >> command;

		switch (command)
		{
		case 1:
			int num;
			cin >> num;
			numbers.push(num);
			break;
		case 2:
			if (numbers.empty())
				continue;
			numbers.pop();
			break;
		case 3:
			if (numbers.empty())
				continue;
						
			while (!numbers.empty()) {
				int tmp = numbers.top();
				numbers.pop();
				temp.push(tmp);
				if (tmp > max)
					max = tmp;
			}
			while (!temp.empty()) {
				numbers.push(temp.top());
				temp.pop();
			}
			cout << max << endl;
			break;
		case 4:
			if (numbers.empty())
				continue;
			
			while (!numbers.empty()) {
				int tmp = numbers.top();
				numbers.pop();
				temp.push(tmp);
				if (tmp < min)
					min = tmp;
			}
			while (!temp.empty()) {
				numbers.push(temp.top());
				temp.pop();
			}
			cout << min << endl;
			break;
		}
	}
	while (!numbers.empty()) {
		if (isFirst) {
			cout << numbers.top();
			numbers.pop();
			isFirst = false;
		}
		else {
			cout << ", " << numbers.top();
			numbers.pop();
		}
	}

	cout << endl;
	return 0;
}
