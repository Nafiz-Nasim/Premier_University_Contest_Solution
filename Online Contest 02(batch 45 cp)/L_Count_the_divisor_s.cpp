#include <iostream>
using namespace std;

int main() {
 int t;
 cin>>t;
 int a,count=0;
 while(t--){
 cin>>a;

for(int i=1;i*i<=a;i++){
  
 if(a%i==0){
if(a/i==i) count++;
else count+=2;

 } 
 




}
cout<<count<<endl;
count=0; 

 }


 } 

