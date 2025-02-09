
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int N;
    cin >> N;
    vector<long long int> divisors;

    for (long long int i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            divisors.push_back(i);
            if (i != N / i) {
                divisors.push_back(N / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    for (long long int num : divisors) {
        cout << num << "\n";
    }

    return 0;
}
