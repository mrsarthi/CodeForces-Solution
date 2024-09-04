#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0, temp = 0;
    cin >> n;

    unordered_map<int, int> mp;
    vector<int> away(n);

    for (int i = 0; i < n; i++)
    {
        cin >> temp >> away[i];
        mp[temp]++;
    }

    for (int i = 0; i < n; i++)
        ans += mp[away[i]];

    // vector<int> home(n);
    // vector<int> away(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> home[i] >> away[i];
    // }

    // for (int i = 0; i < n i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (home[j] == away[i])
    //             ans++;
    //     }
    // }

    cout << ans << endl;

    return 0;
}