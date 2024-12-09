#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input, tinput;
    cin >> tinput;
    while (true)
    {
        tinput = tinput + 1;
        input = tinput;
         long long int digit1 = input % 10;
        input = input / 10;
         long long int digit2 = input % 10;
        input = input / 10;
        long long int digit3 = input % 10;
        input = input / 10;
        long long int digit4 = input % 10;

        if (digit1 != digit2 && digit1 != digit3 && digit1 != digit4 &&
            digit2 != digit3 && digit2 != digit4 &&
            digit3 != digit4)
        {
            cout << tinput << endl;
            break;
        }
    }
}