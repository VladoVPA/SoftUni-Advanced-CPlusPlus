#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <queue>
#include <climits>
using namespace std;

int main()
{
	stack<int> box;
	
	string line;
	getline(cin, line);
	istringstream lineBuf(line);

	int n;
	while (lineBuf >> n) {
		box.push(n);
	}

	int rackCapacity;
	cin >> rackCapacity;


}
