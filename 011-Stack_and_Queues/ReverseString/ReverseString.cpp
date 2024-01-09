#include <iostream>
#include<string>
#include <stack>  

using namespace std;

int main()
{
    string line;
    getline(cin, line);
    stack<char> text;

    for (char c : line)
        text.push(c);
   
    while (!text.empty()) {
        cout << text.top();
        text.pop();
    }

    cout << endl;
    return 0;
}
