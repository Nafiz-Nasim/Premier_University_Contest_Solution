#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int j = 1; j <= t; j++) {
        long long x, n;
        cin >> x >> n;

        cout << "Case " << j << ": ";

        bool is_off = false;
        long long i = 1;

        while (!is_off) {
            long long multiple = x * i;
            if (multiple <= n) {
                if (i > 1) cout << " ";
                cout << multiple;
            } else {
                is_off = true;
            }
            i++;
        }
        cout << endl;
    }

    return 0;
}
