#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int num;
        cin >> num;

       while (num%2==0) num=num/2;
      if(num>1)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
       
    }
}
