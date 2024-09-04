#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    // Calculate the number of flagstones needed along the length and width of the square
    long long x = ceil((double)n / a);
    long long y = ceil((double)m / a);

    // Calculate the total number of flagstones needed
    long long total = x * y;

    // Output the result
    cout << total << endl;

    return 0;
}