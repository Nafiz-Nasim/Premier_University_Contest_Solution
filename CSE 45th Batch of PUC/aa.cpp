#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cin.ignore();
    while (a--)
    {

        string input;

        getline(cin, input);
for(int i=0;i<3;i++)
{
input[i]=tolower(input[i]);
}
if(input=="yes") cout<<"Yes"<<endl;
else cout<<"No"<<endl;

  
    }
}