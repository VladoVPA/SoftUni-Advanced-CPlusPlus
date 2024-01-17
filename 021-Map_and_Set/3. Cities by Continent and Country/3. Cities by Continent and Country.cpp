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

    map<string, map<string,set<string>>> data;

    while (count--)
    {
        string continent, country, city;
        cin >> continent>> country>> city;

        data[continent][country].insert(city);
    }

    auto it1 = data.begin();
    for (; it1 != data.end(); it1++) {
        cout << it1->first << ':' << endl;
    
        map<string, set<string>>& countriesData = it1->second;
        auto it2 = countriesData.begin();
        for (; it2 != countriesData.end(); it2++) {
            cout << "  " << it2->first << " -> ";

            auto cities = it2->second; //set<string> & city = it2->second;

            bool isFirst = true;
            for (string city : cities) {
                if (isFirst)
                    isFirst = false;
                else
                    cout << ", ";
                cout << city;
            }
            cout << endl;
        }
        
    }

    return 0;
}

