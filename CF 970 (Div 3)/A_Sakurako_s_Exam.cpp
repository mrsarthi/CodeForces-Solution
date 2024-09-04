#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (b == 0)
        {
            if (a % 2 == 0)
                cout << "Yes" << endl;

            else
                cout << "No" << endl;
        }
        else
        {
            int total_sum = a + 2 * b;

            if (total_sum % 2 == 0 && (total_sum / 2) % 2 == 0)
                cout << "Yes" << endl;

            else if (total_sum % 2 == 0 && a > 0)
                cout << "Yes" << endl;

            else
                cout << "No" << endl;
        }
    }

    return 0;
}
