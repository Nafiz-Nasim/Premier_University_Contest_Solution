#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    
    for (int c = 1; c <= t; c++) {
        string s;
        getline(cin, s);
        
        string vowel = "";
        string consonent = "";
        
        for (char ch : s) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowel += ch;
            } 
            else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                consonent += ch;
            }
        }
        
        cout << "Case " << c << ":" << endl;
        cout << vowel << endl;
        cout << consonent << endl;
        cout << endl;
    }

    return 0;
}
