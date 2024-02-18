#include <iostream>
#include <map>  //#include <set>
#include <queue> // #include<stack>
#include <string>
#include <sstream>
#include <vector>	//
#include <utility>  // for pairs !!!!!!
#include <algorithm>
#include <climits>

using namespace std;

const int numPlanets = 20;

void readNamesPutInList(vector<string> &n) {
	string command;
	while (cin >> command && command != "END") {
		n.push_back(command);
	}
}

void readMatrix(int(&m)[numPlanets][numPlanets], const int& size, int& min, int& max) {
	for (int r = 0; r < size; r++) {
		for (int c = 0; c < size; c++) {
			int temp;
			cin >> temp;
			m[r][c] = temp;

			if (temp > max)
				max = temp;
			if (temp < min && temp > 0)
				min = temp;
		}
	}
}

 void makeMapFromVector(const vector<string>& n, map <string, int> & map) {
	int index = 0;
	//map<string, int> mapNames;
	
	for (int i = 0; i < n.size(); i++) {
		map[n[index]] = index;
		index++;
	}

	//return mapNames;
}


int main()
{
	vector<string> names;
	readNamesPutInList(names);

	int sizeTimes = names.size();
	int minT = INT_MAX, maxT = INT_MIN;

	int matrixTimes[numPlanets][numPlanets] = {};
	readMatrix(matrixTimes, sizeTimes, minT, maxT);

	vector<pair<int,int>> minDist;
	vector<pair<int, int>> maxDist;

	for (int r = 0; r < sizeTimes; r++) {
		for (int c = 0; c < sizeTimes; c++) {
			if (matrixTimes[r][c] == maxT) {
				pair<int, int> tempMax = make_pair(r, c);
				maxDist.push_back(tempMax);
			}
			else if (matrixTimes[r][c] == minT) {
				pair<int, int> tempMin = make_pair(r, c);
				minDist.push_back(tempMin);
			}
		}
	}

	for (int min = 0; min < minDist.size(); min++) {
		cout << minT << ": ";
		int firstName = minDist[min].first;
		int secondName = minDist[min].second;
		cout << names[firstName] << " -> " << names[secondName] << endl;
	}

	for (int max = 0; max < maxDist.size(); max++) {
		cout << maxT << ": ";
		int firstName = maxDist[max].first;
		int secondName = maxDist[max].second;
		cout << names[firstName] << " -> " << names[secondName] << endl;
	}

	map<string, int> mapNames;
	makeMapFromVector(names, mapNames);

	int totalSum = 0;
	cin.ignore();
	
	while (true) {
		string line;
		getline(cin, line);
		
		if (line == "END") break;

		istringstream buffer(line);
		string temp;
		vector<string> tempNames;
		while (buffer >> temp) 			
			tempNames.push_back(temp);
	
		int currentSum = 0;
		for (int j = 0; j < tempNames.size()-1; j++) {
			int r = mapNames[tempNames[j]];
			int c = mapNames[tempNames[j + 1]];
			currentSum += matrixTimes[r][c];
		}
		cout << currentSum << endl;
		totalSum += currentSum;

	}

	cout << totalSum << endl;

	return 0;
}
