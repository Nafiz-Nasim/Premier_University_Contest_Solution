#include <iostream>
using namespace std;

int main() {
    int start, end,count=0;
    cin >> start >> end;

    if (start > end) swap(start, end);

    for (int a = start; a <= end; a++) {
        if (a < 2) continue; 

        bool prime = true;
        for (int i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
          count++;
            cout << a <<endl;
        }

        if(a==end && count==0) cout<<"Absent"<<endl;
    }

    cout << endl;
  
}
