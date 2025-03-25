#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 1 << endl;
    }
    else if (a >= 5)
    {
        cout << 0 << endl;
    }
    else
    {
        long long product = 1;
        for (long long i = a + 1; i <= b; ++i)
        {
            product = (product * i) % 10;
        }
        cout << product << endl;
    }

    return 0;
}
