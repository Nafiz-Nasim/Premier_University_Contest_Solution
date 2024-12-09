#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int input, animal = 0;
        cin >> input;
        if (input % 2 == 0)
        {
            
            while (input >= 4)
            {
                input = input - 4;
                animal++;
            }
            
            while (input >= 2)
            {
                input = input - 2;
                animal++;
            }
        }

        cout << animal << endl;
    }
}
