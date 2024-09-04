#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == '#')
            {
                ans.push_back(j + 1);
                break;
            }
        }
    }

    reverse(ans.begin(), ans.end());
    for (int i : ans)
        cout << i << " ";

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
