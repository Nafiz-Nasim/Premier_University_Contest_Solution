#include <bits/stdc++.h> 
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int input;
  int place=1;
  cin>>input;
  vector<int>roundednumber;
  while (input>0)
  {
    int digit=input%10;
    if(digit!=0){
      roundednumber.push_back(digit*place);

    }
    input=input/10;
    place=place*10;
  }
  cout<<roundednumber.size()<<endl;
  for(int num:roundednumber){
    cout<<num<<endl;
  }




 }
 return 0;
}