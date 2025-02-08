

/////// time limit error ////////////////////// not accepted/////////
#include <bits/stdc++.h>
using namespace std;

int main() 
{



    long long a;
    cin >> a;
    vector<long long> d;


    
    for (long long i = 1; i * i <= a; i++) {
        if (a % i == 0) {
            d.push_back(i);
            if (i != a / i) {
                d.push_back(a / i);
            }
        }
    }

    sort(d.begin(), d.end());

    for (long long divisor : d) {
        cout << divisor << "\n";
    }

    return 0;
}
