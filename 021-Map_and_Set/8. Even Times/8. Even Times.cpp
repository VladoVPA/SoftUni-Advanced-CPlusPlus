#include <iostream>
#include <map>
#include <vector>
#include<string>
#include <sstream>
using namespace std;

int main()
{
	int count;
	cin >> count;

	map<int, int> numbers;

	while(count--) {
		int num;
		cin >> num;

		numbers[num]++;
	}

	auto it = numbers.begin();
	for (; it != numbers.end(); it++) {
		int number = it->second;
		if (number % 2 == 0) {
			cout << it->first << endl;
			return 0;
		}
	}


}
