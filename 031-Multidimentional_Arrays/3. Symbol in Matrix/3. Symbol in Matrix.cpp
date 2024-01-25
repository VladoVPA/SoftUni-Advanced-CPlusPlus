#include <iostream>
#include <vector>

using  namespace std;

int main()
{
    int N;
    cin >> N;

    vector< vector<char> > matrix(N, vector<char>(N));
    for (int r = 0; r < N; r++)
        for (int c = 0; c < N; c++)
            cin >> matrix[r][c];

    char symbol;
    cin >> symbol;

    for (int r = 0; r < N; r++)
        for (int c = 0; c < N; c++)
            if (symbol == matrix[r][c]) {
                cout << "(" << r << ", " << c << ")" << endl;
                return 0;
            }

    cout << symbol << " does not occur in the matrix " << endl;
    return 0;

}
