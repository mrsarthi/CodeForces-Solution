#include <bits/stdc++.h>

using namespace std;

int minPlotsToReplant(int M, int N, vector<string> &farm)
{
    int replanted = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if ((i > 0 && farm[i][j] == farm[i - 1][j]) || (j > 0 && farm[i][j] == farm[i][j - 1]))
            {
                replanted++;
            }
        }
    }

    return replanted;
}

int main()
{
    int M, N;
    cin >> M >> N;
    vector<string> farm(N);

    for (int i = 0; i < N; ++i)
    {
        string s;
        cin >> s;
        if (s.size() != M)
        {
            cout << -1;
            return 0;
        }
        farm[i] = s;
    }

    int minPlots = minPlotsToReplant(M, N, farm);
    cout << minPlots << endl;

    return 0;
}
