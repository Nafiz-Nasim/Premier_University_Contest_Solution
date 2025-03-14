#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int case_num = 1; case_num <= t; case_num++) {
        string soldiers;
        char dragon;

        getline(cin, soldiers);
        cin >> dragon;
        cin.ignore();
        
        int count = 0;

        for (int i = 0; i < soldiers.size(); i++) {
            if (soldiers[i] == dragon) {
                count++;
            }
        }

        cout << "Case " << case_num << ": " << count << endl;
    }

    return 0;
}
