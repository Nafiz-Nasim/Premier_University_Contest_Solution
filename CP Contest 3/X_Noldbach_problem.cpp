#include <bits/stdc++.h>
using namespace std;

bool is_prime(int num){

    if(num<2) return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0) return false;
    
    }
    return true;
    
    }
int main(){

int n,k;
cin>>n>>k;
vector<int>prime;
for(int i=2;i<=n;i++){
if(is_prime(i)){
    prime.push_back(i);
}
}
int count=0;
for (int i = 0; i <prime.size()-1; i++)
{
    int sum=prime[i]+prime[i+1]+1;
    if(sum<=n&&is_prime(sum)) count++;
}
if(count>=k)cout<<"YES"<<endl;
else cout<<"NO"<<endl;





}