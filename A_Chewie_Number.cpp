#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll reverseDigits(ll num)
{
    ll rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main()
{
    ll x, ans = 0;
    cin >> x;
    ll temp = x;

    while (temp > 0)
    {
        int rem = temp % 10;
        if ((9 - rem) < rem && !(temp == x && rem == 9))
            rem = 9 - rem;

        else
        {
            ans = ans * 10 + rem;
            temp /= 10;
        }
    }

    cout << reverseDigits(ans) << endl;

    return 0;
}
