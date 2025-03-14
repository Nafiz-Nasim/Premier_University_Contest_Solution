#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;

        vector<int> n = {n1, n2, n3};
        sort(n.begin(), n.end());

        cout << "Case " << i << ": " << n[0] << " " << n[1] << " " << n[2] << endl;
    }

    return 0;
}
