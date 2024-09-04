#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> coins(n);
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
        total += coins[i];
    }

    sort(coins.rbegin(), coins.rend());

    int mySum = 0, myCoins = 0;

    for (int i = 0; i < n; i++)
    {
        mySum += coins[i];
        myCoins++;
        if (mySum > total - mySum)
            break;
    }

    cout << myCoins << endl;

    return 0;
}