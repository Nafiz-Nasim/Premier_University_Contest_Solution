#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> factors;

    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }

    if (n > 1) {
        factors.push_back(n);
    }

    if (factors.size() < k) {
        cout << -1 << endl;
    } else {
        while (factors.size() > k) {
            long long merged_factor = factors.back() * factors[factors.size() - 2];
            factors.pop_back();
            factors[factors.size() - 1] = merged_factor;
        }

        for (long long factor : factors) {
            cout << factor << " ";
        }
        cout << endl;
    }

    return 0;
}
