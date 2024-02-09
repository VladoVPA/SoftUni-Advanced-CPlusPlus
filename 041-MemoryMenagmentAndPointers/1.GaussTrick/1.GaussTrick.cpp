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

    int num, index=0;
    while (buffer >> num) {
        array[index] = num;
        index++;
    }

    for (int i = 0; i < index / 2; i++) {
        cout << array[i] + array[index - i - 1] << ' ';
    }
    if (index % 2 != 0) cout << array[index/2] << endl;

    //delete[] array;
    return 0;
}
