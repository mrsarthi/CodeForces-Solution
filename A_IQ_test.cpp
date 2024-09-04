#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int e = 0, o = 0, ee = 0, oo = 0;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (vec[i] % 2 == 0)
        {
            e++;
            ee = i;
        }
        else
        {
            o++;
            oo = i;
        }
    }

    cout << (e > o ? oo : ee) + 1;

    return 0;
}