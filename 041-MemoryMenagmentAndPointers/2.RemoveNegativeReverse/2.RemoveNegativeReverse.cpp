#include <iostream>
#include <string>
#include <sstream>
#include <memory>

using namespace std;

int main()
{
    string line;
    getline(cin, line);
    istringstream buffer(line);

    unique_ptr<int[]> array = make_unique<int[]>(100);

    int num, index = 0;
    while (buffer >> num) {
        array[index] = num;
        index++;
    }

    int toMove = 0;
    for (int i = 0; i < index; i++) {
        if (array[i] < 0) {
            array[i] = 0;
            toMove++;
        }
        else if (array[i] > 0 || toMove == 0)
            array[i - toMove] = array[i];
    }

    if (index != toMove)
        for (int i = index - toMove - 1; i >= 0; i--)
            cout << array[i] << ' ';
    else
        cout << "empty" << endl;
    
    cout << endl;

    return 0;
}

