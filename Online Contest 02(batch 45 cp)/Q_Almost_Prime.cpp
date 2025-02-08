#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;

    for (int num = 1; num <= n; num++) {
        int pd = 0;//divisors kina dekbo 

        for (int i = 2; i <= num; i++) {
            if (num % i == 0) {
                bool isPrime = true;

                for (int j = 2; j * j <= i; j++) {
                    if (i % j == 0) {
                        isPrime = false;
                        break;
                    }
                }

                if (isPrime) {
                    pd++;
                }
            }
        }

        if (pd == 2) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
