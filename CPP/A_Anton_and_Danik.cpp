#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cfora = 0, cford = 0;
    string s;
    cin >> n;
    cin >> s;

    for (char c : s)
    {
        if (c == 'A')
            cfora++;
        else if (c == 'D')
            cford++;
    }

    if (cfora > cford)
        cout << "Anton" << endl;
    else if (cfora < cford)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}