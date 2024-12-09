#include <bits/stdc++.h>
using namespace std;

int main()
{

  int tes;
  cin >> tes;
  cin.ignore();
  while (tes--)
  {
    string input;
    getline(cin, input);

    int len = input.size();
    if (len > 10)
    {
      cout << input[0] << len - 2 << input[len - 1] << endl;
    }
    else
      cout << input << endl;
  }
}
