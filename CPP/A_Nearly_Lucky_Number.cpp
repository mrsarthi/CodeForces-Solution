#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin >> n;

    string s = to_string(n);
    int count = 0;
    for (char c : s)
    {
        if (c == '4' || c == '7')
            count++;
    }

    if (count == 4 || count == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}