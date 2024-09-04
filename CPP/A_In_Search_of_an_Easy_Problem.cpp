#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    cin >> n;

    bool check = true;

    while (n--)
    {
        cin >> i;
        if (i == 1)
        {
            check = false;
            break;
        }
    }

    if (check == false)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;

    return 0;
}