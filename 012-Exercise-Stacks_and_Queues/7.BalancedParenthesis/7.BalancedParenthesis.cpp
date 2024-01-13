#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <queue>
#include <climits>
using namespace std;

int main()
{
    string line;
    getline(cin, line);
    istringstream input(line);

    stack <char> openBrackets;

    char c;
    while (input >> c) {
        if (c == '(' || c == '{' || c == '[')
            openBrackets.push(c);
        else {
            char operant;
            if (c == ')')
                operant = '(';
            if (c == '}')
                operant = '{';
            if (c == ']')
                operant = '[';

            if (openBrackets.empty()) {
                cout << "NO" << endl;
                return 0;
            }

            if (openBrackets.top() == operant)
                openBrackets.pop();
            else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << (openBrackets.empty() ? "YES" : "NO") << endl;
    return 0;


}

