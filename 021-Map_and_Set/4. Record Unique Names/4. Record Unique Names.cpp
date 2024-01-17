#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int count;
    cin >> count;

    vector<string> uniqueNames;

    while (count--)
    {
        string name;
        cin >> name;

        if (find(uniqueNames.begin(), uniqueNames.end(), name) == uniqueNames.end()) {
            uniqueNames.push_back(name);
        }
    }

    for (string name : uniqueNames) {
        cout << name << endl;
    }
}
