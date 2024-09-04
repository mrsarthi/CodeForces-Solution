#include <bits/stdc++.h>
// #include <cctype>

using namespace std;

// int main()
// {
//     string str1, str2;
//     cin >> str1 >> str2;

//     for (char i : str1)
//         i = (char)tolower(i);
//     for (char i : str2)
//         i = (char)tolower(i);

//     if ((char)str1 > (char)str2)
//         cout << 1;
//     if ((char)str1 < (char)str2)
//         cout << -1;
//     else
//         cout << 0;

//     return 0;
// }

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if (str1.compare(str2) < 0)
        cout << "-1" << endl;
    else if (str1.compare(str2) > 0)
        cout << "1" << endl;
    else
        cout << "0" << endl;

    return 0;
}
