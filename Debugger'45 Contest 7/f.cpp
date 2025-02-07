#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
     cin.ignore();
    while (test--)
    {
        int sum_of_fast = 0, sum_of_last = 0;
        string input;
        getline(cin, input);
        for (int i = 0; i < 6; i++)
        {
            if (i <= 2)
            {
 
                sum_of_fast = sum_of_fast + input[i]-'0';
            }
            else {
                sum_of_last=sum_of_last+input[i]-'0';
            }
        }
        if(sum_of_fast==sum_of_last) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}