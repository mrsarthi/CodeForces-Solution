#include <bits/stdc++.h>

using namespace std;

bool isBeautifulYear(int year)
{
    unordered_set<int> digits;
    while (year > 0)
    {
        int digit = year % 10;
        if (digits.count(digit) > 0)
        {
            return false;
        }
        digits.insert(digit);
        year /= 10;
    }
    return true;
}

int main()
{
    int year;
    cin >> year;

    while (true)
    {
        year++;
        if (isBeautifulYear(year))
        {
            cout << year << endl;
            break;
        }
    }

    return 0;
}

// vector<int> v;
//     while (n)
//     {
//         v.push_back(n % 10);
//         n /= 10;
//     }

//     reverse(v.begin(), v.end());

//     for (int i = 1; i < v.size(); i++)
//     {
//         if (v[i] == v[iter])
//         {
//             v[iter] += 1;
//             iter++;
//         }
//     }

//     for (int i : v)
//         cout << i;

//     return 0;