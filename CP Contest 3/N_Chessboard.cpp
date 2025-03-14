#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    for (int i = 1; i <= t; i++) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        
        int moves = max(abs(r2 - r1), abs(c2 - c1));
        cout << "Case " << i << ": " << moves << endl;
    }
    
}