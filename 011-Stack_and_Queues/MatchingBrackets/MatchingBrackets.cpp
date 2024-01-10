#include <iostream>
#include <string>
#include <stack> 
#include <sstream>

using namespace std;

int main()
{
    string line;
    getline(cin, line);
    //istringstream readLine(line);
    stack<char> indexes;

    for (size_t ind = 0; ind < line.size(); ind++) {
        if (line[ind] == '(')
            indexes.push(ind);
        if (line[ind] == ')') {
            string str = line.substr(indexes.top(), ind- indexes.top()+1);
            indexes.pop();
            cout << str << endl;
        }
    }

    return 0;
}

