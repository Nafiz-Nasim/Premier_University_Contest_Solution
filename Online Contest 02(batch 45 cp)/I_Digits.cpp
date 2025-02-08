#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, c = 0;
    cin >> a;

    
    if (a == 0) {
        c = 1;
    } else {
        while (a != 0)
        {
            int d = a % 10; 
            c++;            
            a = a / 10;   
        }
    }

    cout << c;
}
