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
    
    queue<int> numbers;
    queue<char> operations;
    
    int n;
    while (readLine >> n) {
        numbers.push(n);

        char c;
        if (readLine >> c)
            operations.push(c);
        else
            break;
    }

    int sum = numbers.front();
    numbers.pop();

    while (!numbers.empty()) {
        char operation = operations.front();
        operations.pop();

        int num = numbers.front();
        numbers.pop();
        if (operation == '+') {
            sum = sum + num;
        }
        if (operation == '-') {
            sum = sum - num;
        }
    }

    cout << sum << endl;
    return 0;
}
