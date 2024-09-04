#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans;
    string s;
    cin >> n >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
            ans++;
    }

    cout << ans << endl;

    return 0;
}