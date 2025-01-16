
#include<bits/stdc++.h>
using namespace std;
int main(){
    
   int a;
    cin >> a;

    int y = a / 365;
    a = a % 365;

    int m = a / 30;

    int d = a % 30;

    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;


}