#include <bits/stdc++.h>

using namespace std;

string conv(string s, int i)
{
    string ans;
    if (i == 1)
        for (char c : s)
            ans += tolower(c);
    else if (i == 0)
        for (char c : s)
            ans += toupper(c);

    return ans;
}

int main()
{
    string s;
    int upC = 0, loC = 0;
    cin >> s;

    for (char c : s)
    {
        if (isupper(c))
            upC++;
        else
            loC++;
    }

    if (upC == loC)
        cout << conv(s, 1);
    else if (upC > loC)
        cout << conv(s, 0);
    else
        cout << conv(s, 1);

    return 0;
}