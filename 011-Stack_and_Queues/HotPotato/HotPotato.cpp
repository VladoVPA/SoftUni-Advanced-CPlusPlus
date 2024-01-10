#include <iostream>
#include <string>
#include <queue> 
#include <sstream>
using namespace std;

int main()
{
    string line;
    getline(cin, line);
    istringstream readLine(line);

    queue<string> kidsList1;
    queue<string> kidsList2;

    string name;
    while (readLine >> name)
        kidsList1.push(name);

    int toss;
    cin >> toss;

    int index = 1;

    while (true) {
        if (kidsList1.size() == 1 && kidsList2.empty())
            break;
        
        if (kidsList1.empty()) 
            while (!kidsList2.empty()) {
                kidsList1.push(kidsList2.front());
                kidsList2.pop();
            }
                    
        if (index == toss) {
            cout << "Removed " << kidsList1.front() << endl;
            kidsList1.pop();
            index = 1;
        }
        else {
            kidsList2.push(kidsList1.front());
            kidsList1.pop();
            index++;
        }
        
    }

    cout << "Last is " << kidsList1.front() << endl;
    return 0;
}
