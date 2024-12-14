#include <iostream>
#include <string>
using namespace std;

int is_palindromic(string sub_input) {
    for (int i = 0; i < sub_input.length() / 2; i++) {
        if (sub_input[i] != sub_input[sub_input.length() - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
   long long  int t;
    cin >> t;

    while (t--) {
         long long int size, count = 0;
        cin >> size;
        string input;
        cin >> input;

        for (int i = 0; i < size; i++) {
            string new_sub_str = input.substr(0, i) + input.substr(i + 1);
            if (is_palindromic(new_sub_str)) {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
