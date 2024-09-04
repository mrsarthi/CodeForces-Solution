#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (char &c : s)
        c = tolower(c);

    s[0] = toupper(s[0]);
    // for (int i = 0; i < s.size(); i++)
    //     if (i == 32)
    //         s[i + 1] = toupper(s[i + 1]);

    cout << s << endl;

    return 0;
}