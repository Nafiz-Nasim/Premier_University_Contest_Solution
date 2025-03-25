#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
int digitCountInFact(int n) {
    if (n == 1) return 1;
    double logSum = 0;
    for (int i = 1; i <= n; i++) {
        logSum += log10(i);
    }
    return floor(logSum) + 1;
}
void runTest() {
    int num;
    cin >> num;
    cout << digitCountInFact(num) << endl;
}
int main() {
    fast;
    long long t;
    cin >> t;
    while (t--) {
        runTest();
    }
    return 0;
}
