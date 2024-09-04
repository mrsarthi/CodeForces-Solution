#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;

        ll currentX = 0, currentY = 0;
        ll move = 0;

        while (currentX < x || currentY < y)
        {
            move++;
            if (move % 2 == 1)
            {
                currentX += move * k; // Odd move: jump in x direction
            }
            else
            {
                currentY += move * k; // Even move: jump in y direction
            }
        }

        cout << move << endl;
    }

    return 0;
}
