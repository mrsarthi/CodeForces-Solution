#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q, ans = 0;
    cin >> n;

    while (n--)
    {
        cin >> p >> q;

        if (q - p >= 2)
            ans++;
        else
            continue;
    }

    cout << ans << endl;

    return 0;
}