#include <bits/stdc++.h>
using namespace std;
int main()
{
 string input;
 cin>>input;
 sort(input.begin(),input.end());
 int count=0;
 for(int i=0;i<input.size();i++)
 {
    if(input[i]!=input[i+1]) count++;
 
 
 }
 if(count%2==0) cout<<"CHAT WITH HER!";
 else cout<<"IGNORE HIM!";
 
 
 
 
  
 }