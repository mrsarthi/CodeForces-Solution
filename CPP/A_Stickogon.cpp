#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> sticks(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i)
        {
            cin >> sticks[i];
            freq[sticks[i]]++;
        }

        int min_freq = INT_MAX;
        for (auto &it : freq)
        {
            min_freq = min(min_freq, it.second);
        }

        cout << min_freq << endl;
    }

    return 0;
}