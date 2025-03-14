#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n1, n2, n3, nn;
        cin >> n1 >> n2 >> n3 >> nn;

        if (n2 - n1 == n3 - n2) {
            int d = n2 - n1;
            int current_term = n1;

            for (int j = 2; j <= nn; j++) {
                current_term += d;
            }

            cout << "Case " << i << ": " << current_term << endl;
        } else {
            cout << "Case " << i << ": Error" << endl;
        }
    }

    return 0;
}
