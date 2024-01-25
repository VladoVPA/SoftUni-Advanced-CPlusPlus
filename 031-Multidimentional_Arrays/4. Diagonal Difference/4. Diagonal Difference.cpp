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

    int sum1 = 0, sum2=0;
    for (int index = 0; index < N; index++)
        sum1 += matrix[index][index];

    int row = 0;
    for (int ind = N - 1; ind >= 0; ind--) {
        sum2 += matrix[row][ind];
        row++;
    }

    cout << abs(sum1-sum2) << endl;

    return 0;


}
