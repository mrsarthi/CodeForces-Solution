#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int X = 0;
    for (int i = 0; i < n; i++)
    {
        string comm;
        cin >> comm;

        if (comm == "++X" || comm == "X++")
            ++X;
        else
            --X;
    }
    cout << X << endl;

    return 0;
}