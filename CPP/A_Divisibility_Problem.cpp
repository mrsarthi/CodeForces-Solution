#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int remainder = a % b;
        int result;

        if (remainder == 0)
            result = 0;

        else
            result = b - remainder;

        cout << result << endl;
    }

    return 0;
}
