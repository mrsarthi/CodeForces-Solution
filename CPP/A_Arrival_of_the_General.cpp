#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max_pos = 0, min_pos = 0;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    for (int i = 1; i < n; i++)
    {
        if (vec[i] > vec[max_pos])
            max_pos = i;
        if (vec[i] <= vec[min_pos])
            min_pos = i;
    }

    // if (max_pos == 0 && min_pos == n - 1)
    // {
    //     cout << 0 << endl;
    //     return 0;
    // }

    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (vec[i] < vec[i + 1])
    //     {
    //         swap(vec[i], vec[i + 1]);
    //         ans++;
    //     }
    // }

    // for (int i = max_pos; i > 0; i--)
    // {
    //     if (vec[i] > vec[i - 1])
    //     {
    //         swap(vec[i], vec[i - 1]);
    //         ans++;
    //     }
    // }

    int ans = max_pos + (n - 1 - min_pos);

    if (max_pos > min_pos)
        ans--;

    cout << ans << endl;

    return 0;
}
