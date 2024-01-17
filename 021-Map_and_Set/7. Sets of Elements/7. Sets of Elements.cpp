#include <iostream>
#include <map>
#include <set>
#include <vector>
#include<string>
#include <sstream>
using namespace std;

void readSet(set<int>& set, int num) {
    while (num--) {
        int number;
        cin >> number;
        set.insert(number);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    set<int> setN, setM;

    readSet(setN, n);
    readSet(setM, m);

    for (int number : setN) {
        if (setM.find(number) != setM.end())
            cout << number << ' ';
    }

    cout << endl;
    return 0;
}
