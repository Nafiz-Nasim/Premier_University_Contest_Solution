#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    if(a==1){
         cout<<"Not Prime"<<endl;
         return 0;
    }
    bool prime=true;
    for(int i=2;i*i<=a;i++){

       if(a%i==0){
        prime=false;
        break;
       }
      
    }
    if(prime) cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;
        
    }

