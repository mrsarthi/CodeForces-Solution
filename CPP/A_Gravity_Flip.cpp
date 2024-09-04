#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> vec;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        vec.push_back(inp);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }

    cout << endl;

    return 0;
}