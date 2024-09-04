#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 1, ans = 1;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (vec[i] >= vec[i - 1])
        {
            count++;
            ans = max(ans, count);
        }

        else
            count = 1;
    }

    cout << ans << endl;

    return 0;
}