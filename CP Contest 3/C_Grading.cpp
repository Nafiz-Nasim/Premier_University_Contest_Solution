#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, m;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> m;

        cout << "Case " << i << ": ";

        if (m >= 80 && m <= 100)
            cout << "A+";
        else if (m >= 75 && m <= 79)
            cout << "A";
        else if (m >= 70 && m <= 74)
            cout << "A-";
        else if (m >= 65 && m <= 69)
            cout << "B+";
        else if (m >= 60 && m <= 64)
            cout << "B";
        else if (m >= 55 && m <= 59)
            cout << "B-";
        else if (m >= 50 && m <= 54)
            cout << "C";
        else if (m >= 45 && m <= 49)
            cout << "D";
        else
            cout << "F";

        cout << endl;
    }

    return 0;
}
