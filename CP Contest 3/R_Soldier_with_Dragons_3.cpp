#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    
    for (int c = 1; c <= t; c++) {
        string s;
        getline(cin, s);
        
        int x1, x2;
        cin >> x1 >> x2;
        cin.ignore();
        
        int count = 0;
        
        for (int i = x1 - 1; i < x2; i++) {
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                count++;
            }
        }
        
        cout << "Case " << c << ": " << count << endl;
    }
    
    return 0;
}
