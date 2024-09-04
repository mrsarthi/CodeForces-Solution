#include <bits/stdc++.h>
using namespace std;

bool isPerSqu(string s, int n)
{
    int t = sqrt(n);
    if (t * t == n)
        return true;
}

int main()
{
    int t, n;
    string s;
    cin >> t;

    while (t--)
    {
        cin >> n;
        cin >> s;
        if (!isPerSqu(s, n))
            cout << "No" << endl;

        else
            cout << "Yes" << endl;
    }

    return 0;
}