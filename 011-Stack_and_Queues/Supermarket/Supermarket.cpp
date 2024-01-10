#include <iostream>
#include <string>
#include <queue> 
#include <sstream>
using namespace std;

int main()
{
	string input;
	cin >> input;

	queue <string> listOfNames;

	while (input != "End") {
		if (input == "Paid")
			while (!listOfNames.empty()) {
				cout << listOfNames.front() << endl;
				listOfNames.pop();
			}
		else
			listOfNames.push(input);

		cin >> input;
	}

	int size = listOfNames.size();

	cout << size << " people remaining." << endl;
	return 0;
}

