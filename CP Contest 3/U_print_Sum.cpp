#include <bits/stdc++.h>
using namespace std;

int main()
{
string in,numbers;
 cin>>in;
 for(char num:in){
  

if(num!='+') numbers+=num;


 }
 sort(numbers.begin(),numbers.end());

 int index=0;
 for(char &n:in){
     
    if(n!='+'){

        n=numbers[index++];
    }
  


 }
 cout<<in;

}