#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    while (cin >> n && n != 0)
    {
        m = n;
        set<int> fectors;

        while (n % 2 == 0)
        {
            fectors.insert(2);
            n = n / 2;
        }

        for (int i = 3; i * i <= n; i = i + 2)
        {
            while (n % i == 0)
            {
                fectors.insert(i);
                n = n / i;
            }
        }

        if (n > 2)
        {
            fectors.insert(n);
        }

        cout << m << " : " << fectors.size() << endl;
    }
}
