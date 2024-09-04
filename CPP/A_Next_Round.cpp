#include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n, k, ans, a;
//     cin >> n >> k;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a;
//         if (a >= k)
//             ans++;
//     }
//     cout << ans << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int res = 0;
    int i = 0;
    int arr[n];
    while (i < n)
    {
        cin >> arr[i++];
    }
    int t = arr[k - 1];
    for (auto x : arr)
    {
        if (x >= t && x != 0)
            res++;
    }
    cout << res << endl;
    return 0;
}