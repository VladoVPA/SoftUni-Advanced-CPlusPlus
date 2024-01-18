#include <iostream>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
	string line;
	getline(cin, line);
	istringstream buf(line);

	map<string, int> words;
	vector<string> order;

	string input;
	while (buf >> input) {
		for (size_t ind = 0; ind < input.size(); ind++) {
			char c = input[ind];
			
			input[ind]=tolower(c);
		}
		if (words.find(input) == words.end())
				order.push_back(input);
		
		words[input]++;
	}
	
	bool isFirst = true;
	
	for (size_t ind = 0; ind < order.size(); ind++) {
		string word = order[ind];
		auto result = words.find(word);
		
		int num = result -> second;
		
		if (num % 2 != 0) {
			if (isFirst)
				isFirst = false;
			else
				cout << ", ";

			cout << result -> first;
		}
	}

	cout << endl;
	return 0;
}
