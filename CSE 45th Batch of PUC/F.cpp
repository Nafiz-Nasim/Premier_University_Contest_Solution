#include <bits/stdc++.h>
using namespace std;
int main()
{
  string input;

  while (true)
  {
    cin >> input;
    if (input == "0")
      return 0;
    int sum = 0;
    for (int i = 0; i < input.size(); i++)
    {
      int num = input[i] - '0';
      sum = sum + num;
    }
    cout << sum << endl;
  }
}