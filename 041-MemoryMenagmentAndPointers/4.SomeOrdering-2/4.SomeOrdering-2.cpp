#include <iostream>
#include <string>
#include <sstream>
#include <string.h>
#include <cstring>
#include <memory>

using namespace std;

char* transformString(const char* ptr, const int& n, char (*function)(const char&)) {
    char* ptrBuffer = new char[n];

    for (int i = 0; i < n; i++)
        ptrBuffer[i] = function(ptr[i]);

    return ptrBuffer;
}

char toLower(const char& c) {
    if (c >=65 && c <=90 )  //65 <=c && c <= 90
        return c + 32;

    return c;
}

char toUpper(const char& c) {
    if (c >= 97 && c <= 122)
        return c - 32;

    return c;
}


int main()
{
    string line;
    getline(cin, line);

    char * operation1 = transformString(line.c_str(), line.size() + 1, toLower);
    cout << operation1 << endl;
    delete[] operation1;

    char* operation2 = transformString(line.c_str(), line.size() + 1, toUpper);
    cout << operation2 << endl;
    delete[] operation2;

    return 0;
}
