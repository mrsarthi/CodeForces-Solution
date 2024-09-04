#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    string ans;
    vector<char> vowel{'a', 'e', 'i', 'o', 'u', 'y'};
    for (char c : str)
    {
        if (isupper(c))
            c = tolower(c);

        auto found = find(vowel.begin(), vowel.end(), c);
        if (found == vowel.end())
        {
            ans += '.';
            ans += c;
        }
    }

    cout << ans << endl;

    return 0;
}
