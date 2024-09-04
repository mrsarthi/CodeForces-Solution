#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        if ((n / 2) % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            ll sum_even = 0, sum_odd = 0;

            for (int i = 1; i <= n / 2; i++)
            {
                cout << 2 * i << " ";
                sum_even += 2 * i;
            }
            for (int i = 1; i < n / 2; i++)
            {
                cout << 2 * i - 1 << " ";
                sum_odd += 2 * i - 1;
            }

            cout << sum_even - sum_odd << endl;
        }
    }

    return 0;
}
