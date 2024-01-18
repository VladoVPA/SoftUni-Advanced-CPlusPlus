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

	set<string> wordsList;

	string word;
	while (input >> word) {
		if (word.size() < 5) {
			for (size_t ind = 0; ind < word.size(); ind++) {
				char c = word[ind];
				word[ind] = tolower(c);
			}

			wordsList.insert(word);

		}
	}

	bool isFirst = true;
	for (string w : wordsList) {
		if (isFirst)
			isFirst = false;
		else
			cout << ", ";

		cout << w;
	}
	cout << endl;
	return 0;
}
