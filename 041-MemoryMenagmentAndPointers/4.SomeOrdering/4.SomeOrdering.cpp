#include <iostream>
#include <string>
#include <sstream>
#include <memory>

using namespace std;

void printToLower(unique_ptr<char[]> & array, const int & n) {
    char forPrint;
    for (int i = 0; i < n; i++) {
        forPrint = tolower(array[i]);
        cout << forPrint;
    }
    cout << endl;
}

void printToUpper(unique_ptr<char[]>& array, const int& n) {
    char forPrint;
    for (int i = 0; i < n; i++) {
        forPrint = toupper(array[i]);
        cout << forPrint;
    }
    cout << endl;
}

void printTo(unique_ptr<char[]>& array, const int& n) {
    char forPrint;
    for (int i = 0; i < n; i++) {
        forPrint = array[i];
        cout << forPrint;
    }
    cout << endl;
}

int main()
{
    string line;
    getline(cin, line);
    
    unique_ptr<char[]> array = make_unique<char[]>(100);

    int index = 0;
    for (int i = 0; i < line.size(); i++) {
        char C = line[i];
        array[index] = C;
        index++;
    }

    //printTo(array, index);
    printToLower(array, index);
    printToUpper(array, index);

    return 0;
}
