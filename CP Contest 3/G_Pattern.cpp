#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int c = 1; c <= t; c++)
    {
        int d, h;
        cin >> d >> h;

        cout << "Case " << c << ":" << endl;

        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << d;
            }
            cout << endl;
        }
    }

    return 0;
}
