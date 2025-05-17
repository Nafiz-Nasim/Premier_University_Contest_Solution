#include <bits/stdc++.h>
using namespace std;

int main()
{
long long int a,b,c,d,m=1;
int d1,d2;
cin>>a>>b>>c>>d;
    m = (m * a) % 100;
    m = (m * b) % 100;
    m = (m * c) % 100;
    m = (m * d) % 100;

    
    if (m < 10)
        cout << "0" << m << endl;
    else
        cout << m<< endl;


}

