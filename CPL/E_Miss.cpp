#include <bits/stdc++.h>
using namespace std;

int main()
{
 long long int n,a,insum=0;
 cin>>n;



 long long int total=(n*(n+1))/2;
 for(int i=0;i<n-1;i++){
cin>>a;
insum=insum+a;

 }

cout<<total-insum<<endl;


 

}