#include <iostream>
#include <map>
#include <vector>
#include<string>
#include <sstream>
using namespace std;

int main()
{
    string line;
    getline(cin, line);
    istringstream buf(line);
    
    double num;
    vector<double> numsV;
    map<double, int> numbers;

    while (buf >> num) {
        if (numbers.find(num) == numbers.end())
            numsV.push_back(num);

        numbers[num]++;
    }

    for (double N : numsV) {
        cout << N << " - " << numbers[N] << " times" << endl;
    }

    return 0;
}
