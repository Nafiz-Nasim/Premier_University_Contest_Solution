#include <bits/stdc++.h>
using namespace std;
int main()
{


    int temp;
  vector<int> v(10);
  for(int i=0; i<10; i++) cin >> v[i];
  sort(v.begin(),v.end(),greater<int>());
  cout << v[0] << endl;
  cout << v[1] << endl;
  cout << v[2]<< endl;




}