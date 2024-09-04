#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, level;
    cin >> n;

    map<int, bool> comp;

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> level;
        comp[level] = true;
    }

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> level;
        comp[level] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        if (comp[i] == false)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;
    return 0;
}
