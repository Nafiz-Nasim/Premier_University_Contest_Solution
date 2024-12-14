#include <bits/stdc++.h>
using namespace std;
int main()
{
 long long int test;
cin>>test;
while(test--)
{
 long long int n,m;
cin>>n>>m;
cin.ignore();
int sum=0,count=0;
 
while(n--)
{
    string input;
    getline(cin,input);
    sum+=input.size();
    if(sum<=m)
    {
        count++;
    }
 
}
cout<<count<<endl;
 
 
}
 
 
 
return 0;
}
