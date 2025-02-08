#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        int sum = a + b;
        int count = to_string(sum).length();
        cout << count << endl;
    }
    return 0;
}
