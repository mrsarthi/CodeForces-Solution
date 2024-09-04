#include <bits/stdc++.h>

using namespace std;

bool isLucky(int n)
{
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
            return false;

        n /= 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    bool lucky = false;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && isLucky(i))
        {
            lucky = true;
            break;
        }
    }

    if (lucky)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}
