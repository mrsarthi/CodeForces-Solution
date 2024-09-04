#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char> ans;
    char c;

    while (true)
    {
        cin >> c;
        if (c == '}')
            break;
        if (isalpha(c))
            ans.insert(c);
    }

    cout << ans.size() << endl;

    return 0;
}