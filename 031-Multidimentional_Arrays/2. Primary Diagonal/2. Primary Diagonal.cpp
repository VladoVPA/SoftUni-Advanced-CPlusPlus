#include <iostream>
#include <vector>

using  namespace std;

int main()
{
    int N;
    cin >> N;

    vector< vector<int> > matrix(N, vector<int>(N));

    for (int r = 0; r < N; r++)
        for (int c = 0; c < N; c++)
            cin >> matrix[r][c];

    int sum = 0;
    for(int index=0; index<N; index++)
        sum += matrix[index][index];

    cout << sum << endl;

    return 0;
}
