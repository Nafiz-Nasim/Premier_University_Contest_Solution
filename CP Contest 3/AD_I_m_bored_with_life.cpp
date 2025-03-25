#include <bits/stdc++.h>
using namespace std;
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    int min_val = min(a, b);
    cout << factorial(min_val) << endl;
    return 0;
}
