#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string prev = "";
    int ans = 0;

    while (n--)
    {
        string i;
        cin >> i;

        if (i != prev)
        {
            ans++;
            prev = i;
        }
    }

    cout << ans << endl;

    return 0;
}