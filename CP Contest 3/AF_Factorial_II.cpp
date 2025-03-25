#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n && n != 0) {
        int count = 0;
        while (n >= 5) {
            n /= 5;
            count += n;
        }
        cout << count << endl;
    }
    return 0;
}
