#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;

    int i = 0, j = t.size() - 1;
    bool check = false;
    while (i <= j)
    {
        if (s[i] == t[j])
        {
            check = true;
            i++;
            j--;
        }
        else
            check = false;
    }

    if (check == false)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    // reverse(t.begin(), t.end());
    // if (s == t)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;

    return 0;
}