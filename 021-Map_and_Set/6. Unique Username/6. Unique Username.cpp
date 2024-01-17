#include <iostream>
#include <map>
#include <set>
#include <vector>
#include<string>
#include <sstream>
using namespace std;

int main()
{
    int count;
    cin >> count;

    set<string> uniqueUsernames;

    while (count--) {
        string userName;
        cin >> userName;

        uniqueUsernames.insert(userName);
    }

    for (string name : uniqueUsernames)
        cout << name << endl;

    return 0;

}

