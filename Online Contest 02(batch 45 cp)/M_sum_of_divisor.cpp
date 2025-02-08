#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, sum = 0;
        cin >> a;

        for (int i = 1; i * i <= a; i++) {
            if (a % i == 0) {
                if (a / i == i) {
                    sum += i;  
                } else {
                    sum += i + (a / i);  
                }
            }
        }
        
        sum -= a; 
        
        cout << sum << endl;
    }
    return 0;
}
