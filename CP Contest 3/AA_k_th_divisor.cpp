#include <bits/stdc++.h>
using namespace std;
int main(){

long long int n,k;
 cin>>n>>k;
 vector< long long int>divisor;
 for( long long int i=1;i*i<=n;i++){
  if(n%i==0){
    divisor.push_back(i);
    if(i!=n/i) divisor.push_back(n/i);
} 

 }
 sort(divisor.begin(),divisor.end());
if(divisor.size()>=k)cout<<divisor[k-1];
else cout<<"-1";


}