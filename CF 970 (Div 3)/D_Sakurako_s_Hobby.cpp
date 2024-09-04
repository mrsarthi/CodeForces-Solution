#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        p[i]--;
    }
    string s;
    cin >> s;

    vector<int> visited(n, 0);
    vector<int> F(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;

        vector<int> cycle;
        int j = i;
        while (!visited[j])
        {
            visited[j] = 1;
            cycle.push_back(j);
            j = p[j];
        }

        int black_count = 0;
        for (int x : cycle)
            if (s[x] == '0')
                black_count++;

        for (int x : cycle)
            F[x] = black_count;
    }

    for (int i = 0; i < n; i++)
        cout << F[i] << " ";

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
