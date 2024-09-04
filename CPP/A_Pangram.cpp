#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, count = 0;
    string str;
    cin >> n >> str;

    bool letters[26] = {false};

    for (int i = 0; i < n; i++)
    {
        char c = tolower(str[i]);

        if (c >= 'a' && c <= 'z')
        {
            if (!letters[c - 'a'])
            {
                letters[c - 'a'] = true;
                count++;
            }
        }
    }

    if (count == 26)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}

// GPT sol
//  #include <bits/stdc++.h>
//  #define ll long long
//  using namespace std;

// int main(){
//     ll n;
//     string str;
//     cin >> n >> str;

//     // Convert all characters to lowercase
//     transform(str.begin(), str.end(), str.begin(), ::tolower);

//     // Set to store unique letters
//     set<char> unique_letters;

//     // Insert each character in the set
//     for(char c : str) {
//         unique_letters.insert(c);
//     }

//     // Check if the set contains all 26 letters
//     if(unique_letters.size() == 26) {
//         cout << "YES" << endl;  // It's a pangram
//     } else {
//         cout << "NO" << endl;   // It's not a pangram
//     }

//     return 0;
// }
