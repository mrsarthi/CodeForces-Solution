#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string s;
    cin >> t;

    while (t--)
    {
        cin >> n >> s;
        if (s[0] == s[n - 1])
            cout << "nO" << endl;
        else
            cout << "yEs" << endl;
    }

    return 0;
}