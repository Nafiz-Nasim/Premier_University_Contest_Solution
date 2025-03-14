#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        if (x1 < x4 && x3 < x2 && y1 < y4 && y3 < y2)
        {
            cout << "Case " << i << ": Yes" << endl;
        }
        else
        {
            cout << "Case " << i << ": No" << endl;
        }
    }

    return 0;
}