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

	int racksNum = 1, clothsOnRack=0;

	while (!box.empty()) {
		int cloth = box.top();
		box.pop();

		if (clothsOnRack + cloth <= rackCapacity) 
			clothsOnRack = clothsOnRack + cloth;
		else {
			racksNum++;
			clothsOnRack = cloth;
		}
	}

	cout << racksNum << endl;
	return 0;
}
