#include <iostream>
#include <string>
#include <sstream>
#include <memory>

using namespace std;

int main()
{
    int n, m, r,c;
    cin >> n >> m;

    unique_ptr<int[]> array = make_unique<int[]>(100);

    int num, index = 0;
    while (index < n*m) {
        cin >> num;
        array[index] = num;
        index++;
    }

    cin >> r >> c;
    cout << endl;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << array[i * m + j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
