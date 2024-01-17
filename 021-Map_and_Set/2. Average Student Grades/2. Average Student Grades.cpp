#include <iostream>
#include <map>
#include <vector>
#include<string>
#include <sstream>
using namespace std;

int main()
{
    int count;
    cin >> count;

    map<string, vector<double>> students;

    while (count--) {
        string name;
        cin >> name;

        double grade;
        cin >> grade;

        vector<double>& grades = students[name];
        grades.push_back(grade);
    }

    for (auto it = students.begin(); it != students.end(); it++) {
        cout << it->first << " -> ";

        double sum = 0;
        int count = 0;
        cout.setf(ios::fixed);
        cout.precision(2);

        for (double n : it->second) {
            cout << n << ' ';
            sum += n;
            count++;
        }
        cout << "(avg: "<< sum/ count << ")" << endl;
    }

    return 0;
}

