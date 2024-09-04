#include <bits/stdc++.h>
using namespace std;

int main()
{
    string no1, no2, ans;
    cin >> no1 >> no2;

    for (int i = 0; i < no1.size(); i++)
    {
        if (no1[i] != no2[i])
            ans.push_back('1');
        else
            ans.push_back('0');
    }

    cout << ans << endl;

    return 0;
}