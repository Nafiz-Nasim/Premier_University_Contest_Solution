/////////////Wrong ans in t77///////////////////// not accepted/////////

#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int max_n = 10000;           // Maximum limit------ prime numbers
    vector<int> pList;                 //  prime number rakhar list
    vector<bool> isP(max_n + 1, true); // shob 1

    // gunitok a tar oi number ta rakbo //sir er cp class er prime ber korar niom
    for (int i = 2; i * i <= max_n; i++)
    {
        if (isP[i])
        {
            for (int j = i * i; j <= max_n; j += i)
            {
                isP[j] = false;
            }
        }
    }

    // prime gula k alada kore
    for (int i = 2; i <= max_n; i++)
    {
        if (isP[i])
            pList.push_back(i);
    }

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << pList[n - 1] << endl;
    }

    return 0;
}
