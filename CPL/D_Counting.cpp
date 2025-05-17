#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long n, k, sum = 0;
        cin >> n >> k;
        while (n != 0)
        {

            if (n % k == 0)
            {
                sum++;
                n = n / k;
            }
            else
            {
                long long int r = n % k;
                n = n - r;
                sum = sum + r;
            }
        }

        cout << sum << endl;
    }
}