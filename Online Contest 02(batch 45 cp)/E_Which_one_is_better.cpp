#include <bits/stdc++.h>
using namespace std;
int main()
{
int test,input;
cin>>test;

while (test--)
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   int e,f;
   e=a-c;
   f=b-d;

   if(e>f) cout<<"Second"<<endl;
   else if(e==f) cout<<"Any"<<endl;
   else cout<<"First"<<endl;
   

}





}