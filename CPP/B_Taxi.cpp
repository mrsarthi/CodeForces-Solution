#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, taxis = 0;
    cin >> n;

    vector<int> vec(n);
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> vec[i];
        if (vec[i] == 1)
            count1++;
        else if (vec[i] == 2)
            count2++;
        else if (vec[i] == 3)
            count3++;
        else if (vec[i] == 4)
            count4++;
    }

    taxis += count4;

    int combined_3_and_1 = min(count3, count1);
    taxis += combined_3_and_1;
    count3 -= combined_3_and_1;
    count1 -= combined_3_and_1;

    taxis += count3;

    taxis += count2 / 2;
    count2 %= 2;

    if (count2 > 0)
    {
        taxis += 1;
        count1 -= min(2, count1);
    }

    taxis += (count1 + 3) / 4;

    cout << taxis << endl;

    return 0;
}
