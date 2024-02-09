#include <iostream>
#include <string>
#include <sstream>
#include <string.h>
#include <cstring>
#include <memory>

using namespace std;

void minesArrayIncrese(unique_ptr< unique_ptr<int[]>[]> &array, const int& r, const int& c, const int&rows, const int& cols) {
    for (int i = max(r - 1, 0); i <= min(r + 1, rows - 1); i++)
        for (int j = max(c - 1, 0); j <= min(c + 1, cols - 1); j++)
            array[i][j]++;
}

int main()
{
    int n, m;
    cin >> n >> m >> ws;

    unique_ptr< unique_ptr<int[]>[]> array = make_unique< unique_ptr<int[]>[]>(n);
    for (int i = 0; i < n; i++)
        array[i] = make_unique <int[]>(m);

    for (int r = 0; r < n; r++) {
        string line;
        getline(cin, line);

        for (int c = 0; c < m; c++) {
            char x = line[c];
            if (x == '!')
                minesArrayIncrese(array,r,c,n,m);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j];
        }
        cout << endl;
    }
}
