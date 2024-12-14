#include <bits/stdc++.h>
using namespace std;
int main()
{


    int size,k;
    cin>>size>>k;
    vector<int>input(size);
    for(int i=0;i<size;i++)
    {
        cin>>input[i];
    }
    int count=0;
    int store_value=input[k-1];
    for(int value:input)
    {
        if(value>=store_value&& value>=1) count++;
    }


cout<<count;
}
