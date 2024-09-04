#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int check = 1;

    sort(s.begin(), s.end());
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
            check++;
    }
    if (check % 2 != 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}