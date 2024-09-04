#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, ans = 0;
    cin >> n;

    if (n % 100 == 0)
    {
        cout << n / 100 << endl;
        return 0;
    }

    ans = ans + n / 100;
    n = n % 100;
    ans = ans + n / 20;
    n = n % 20;
    ans = ans + n / 10;
    n = n % 10;
    ans = ans + n / 5;
    n = n % 5;
    ans = ans + n;

    cout << ans << endl;

    return 0;
}
