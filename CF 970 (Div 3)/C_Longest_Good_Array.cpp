#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, l, r;
    cin >> t;

    while (t--)
    {
        cin >> l >> r;

        ll maxLel = 0;
        ll diff = r - l;
        ll k = 1;

        while (k * (k - 1) / 2 <= diff)
        {
            maxLel = k;
            k++;
        }

        cout << maxLel << endl;
    }

    return 0;
}
