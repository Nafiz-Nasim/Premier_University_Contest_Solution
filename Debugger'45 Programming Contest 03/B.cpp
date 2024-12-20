#include <bits/stdc++.h>
using namespace std;
int main()
{
int a;
cin>>a;
for(int i=1;i<=a;i++)
{
 if(i==1&&i==a)
 { cout<<"I hate it ";
 return 0;
 }
  if(i==2&&i==a) 
 {cout<<"I love it ";
 return 0;
 }
 if(i!=a)
 {
  if(i%2!=0) cout<<"I hate that ";
  else cout<<"I love that ";
 }
 else {
    if(i%2!=0) cout<<"I hate it  ";
  else cout<<"I love it ";
    
 }

}





}