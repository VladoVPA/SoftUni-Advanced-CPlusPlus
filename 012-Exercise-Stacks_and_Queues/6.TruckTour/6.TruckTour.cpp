#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <queue>
#include <climits>
using namespace std;

bool canGo(queue<int> L, queue<int>D) {
	long tank = 0;
	while (!L.empty()) {
		int liters = L.front();
		int dist = D.front();

		if (tank + liters >= dist) {
			L.pop();
			D.pop();
			tank += (liters - dist);
		}
		else
			break;
	}

	if (!L.empty())
		return false;
	else
		return true;
}

int main()
{
	int numberOfPumps;
	cin >> numberOfPumps;
	cin.ignore();

	queue<int> liters;
	queue<int> distance;

	for (size_t x = 0; x < numberOfPumps; x++) {
		int L, D;
		cin >> L >> D;
		liters.push(L);
		distance.push(D);
	}

	
	int pumpIndex = 0;
	
	for ( ; pumpIndex < numberOfPumps; pumpIndex++) {
		if (canGo(liters, distance)) {
			break;	
		}
		else {
			liters.push(liters.front());
			distance.push(distance.front());
			liters.pop();
			distance.pop();
		}
	}

	cout << pumpIndex << endl;
	return 0;
}
