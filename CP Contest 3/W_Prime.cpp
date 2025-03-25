#include <bits/stdc++.h>
using namespace std;

bool isprime(int number) {
    if (number < 2) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    int c = 1;

    while (t--) {
        string in;
        cin >> in;

        map<char, int> frequency;
        for (char ch : in) {
            frequency[ch]++;
        }

        vector<char> output;
        for (auto it : frequency) {
            if (isprime(it.second)) {
                output.push_back(it.first);
            }
        }

        sort(output.begin(), output.end());
        cout << "Case " << c << ": ";

        if (output.empty()) {
            cout << "empty";
        } else {
            for (char ch : output) {
                cout << ch;
            }
        }

        cout << endl;
        c++;
    }

    return 0;
}
