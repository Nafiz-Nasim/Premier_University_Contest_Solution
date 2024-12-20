#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int array[n];
int count=0;
for(int i=0;i<n;i++)
{
    cin>>array[i]; 
} 
int rs=array[k-1];
for(int i=0;i<n;i++)
{
    if(array[i]>=rs && array[i]>0) count++;
}
cout<<count;




}