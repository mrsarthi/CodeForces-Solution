#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 0, ans = 0;
    cin >> n;

    while (n > 0)
    {
        string s;
        cin >> s;
        if (s[i] == 'T')
        {
            ans += 4;
            n--;
        }
        else if (s[i] == 'C')
        {
            ans += 6;
            n--;
        }
        else if (s[i] == 'O')
        {
            ans += 8;
            n--;
        }
        else if (s[i] == 'D')
        {
            ans += 12;
            n--;
        }
        else
        {
            ans += 20;
            n--;
        }
    }

    cout << ans << endl;

    return 0;
}