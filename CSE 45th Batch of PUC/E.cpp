#include <bits/stdc++.h>
using namespace std;
int main()
{
   string number;
   int i, count = 0;
   cin >> number;
   for (i = 0; i < number.size(); i++)
   {
      if (number[i] == number[i + 1])
      {
         count++;

         if (count == 6)
         {
            break;
         }
         else
         {
            continue;
         }
      }
      else
      {
         count = 0;
      }
   }
   if (count == 6)
   {
      cout << "YES" << endl;
   }
   else
   {
      cout << "NO" << endl;
   }

   getchar();
}