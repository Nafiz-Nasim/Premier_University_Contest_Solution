#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int r, b, d;
    cin >> r >> b >> d;
    bool ans = true;
    if (r <= b)
    {
        while (r != 0 && b != 0)
        {
            r = r - 1;
            if (b > d)
            {
                b = b - d;
            }
            else
                b = b - b;
        }
        if(r!=0||b!=0) ans=false;
    }
    else {
         while (r != 0 && b != 0)
        {
            b = b- 1;
            if (r > d)
            {
                r = r - d;
            }
            else
                r = r - r;
        }
        if(r!=0||b!=0) ans=false;
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}