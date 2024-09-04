#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i = 0;
    cin >> s;

    if (s.size() == 0)
        cout << s << endl;

    string temp;
    for (char c : s)
    {
        if (c != '+')
            temp.push_back(c);
    }
    sort(temp.begin(), temp.end());
    string ans = "";
    for (auto x : temp)
    {
        ans += x;
        ans += '+';
    }
    ans.pop_back();
    cout << ans << endl;

    return 0;
}