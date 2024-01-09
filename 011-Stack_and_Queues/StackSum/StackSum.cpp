#include <iostream>
#include <string>
#include <stack> 
#include <sstream>
using namespace std;

int main()
{
    string line;
    getline(cin, line);
    istringstream readLine(line);
    stack<char> numbers;
    
    int x;
    while (readLine >> x)
        numbers.push(x);

    while (true) {
        string command;
        cin >> command;

        for (int ind = 0; ind < command.size(); ind++)
            command[ind] = tolower(command[ind]);
        
        if (command == "end")
            break;

        if (command == "add") {
            int n1, n2;
            cin >> n1 >> n2;
            numbers.push(n1);
            numbers.push(n2);
        }

        if (command == "remove") {
            int x1;
            cin >> x1;
            if (numbers.size() >= x1) {
                for (int i = 1; i <= x1; i++)
                    numbers.pop();
            }
        }
    }
    int sum = 0;
    while (!numbers.empty()) {
        sum += numbers.top();
        numbers.pop();
    }

    cout << sum << endl;
    return 0;
}
