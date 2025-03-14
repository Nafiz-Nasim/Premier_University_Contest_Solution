#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int main() {


    fast;

    long long int t;
    cin >> t;


    while (t--) {
        int x;
        cin >> x;
        
        if (x == 1) {
            cout << "0\n1\n";
            continue;
        }
        int a = 1 << (x - 1);
        int b = (1 << x) - 1;
        for (int i = a; i <= b; i++) {
            cout << bitset<32>(i).to_string().substr(32 - x) << endl;
        }
    }
    
}
