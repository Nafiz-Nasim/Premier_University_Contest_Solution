#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string input;
        cin >> n >> input;

        int ca = 0, cb = 0, cc = 0, cd = 0;

        for (int i = 0; i < input.size(); i++) {
            if (input[i] == 'A' && ca < n) ca++;
            else if (input[i] == 'B' && cb < n) cb++;
            else if (input[i] == 'C' && cc < n) cc++;
            else if (input[i] == 'D' && cd < n) cd++;
        }

        int fc = ca + cb + cc + cd;
        cout << fc << endl;
    }

 
}
