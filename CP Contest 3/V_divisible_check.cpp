#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
    long long  int  a, b;
        cin >> a >> b;
        
       long long int  move = (a % b == 0) ? 0 : (b - (a % b));

        cout << move << endl;
    }
    
    return 0;
}
