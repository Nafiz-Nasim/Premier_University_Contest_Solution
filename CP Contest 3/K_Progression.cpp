#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        bool AP = (b - a == c - b);

        bool GP = (a != 0 && b != 0 && (double)b / a == (double)c / b);

        cout << "Case " << i << ": ";
        if (AP && GP)
            cout << "Both" << endl;
        else if (AP)
            cout << "Arithmetic Progression" << endl;
        else if (GP)
            cout << "Geometric Progression" << endl;
        else
            cout << "None" << endl;
    }
    return 0;
}
