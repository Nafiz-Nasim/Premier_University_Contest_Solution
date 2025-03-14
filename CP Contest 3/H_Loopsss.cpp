#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int ca = 1; ca <= t; ca++) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << "Case " << ca << ":" << endl;

        for (int x = 0; x <= a; x++) {
            for (int y = x + 1; y <= b; y++) {
                for (int z = y + 1; z <= c; z++) {
                    cout << x << " " << y << " " << z << endl;
                }
            }
        }
    }

    return 0;
}
