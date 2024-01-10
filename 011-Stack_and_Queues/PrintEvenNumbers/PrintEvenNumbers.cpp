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
    
    bool isFirst = true;

    int n;
    while (readLine >> n) {
        if (n % 2 == 0)
            numbers.push(n);
    }

    while (!numbers.empty()) {
        if (isFirst == true)
            isFirst = false;
        else
            cout << ", ";

        cout << numbers.front();
        numbers.pop();
    }
   
    cout << endl;
    return 0;
}
