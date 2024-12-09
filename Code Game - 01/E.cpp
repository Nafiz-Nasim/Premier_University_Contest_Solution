#include <bits/stdc++.h>
using namespace std;
int main()
 
{
    int size;
    cin >> size;
    cin.ignore();
    string input[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    int i = 0, count = 0;
    while (i <= size-3)
    {
        if (input[i] == "1")
        {
            i++;
            if (input[i] == "0")
            {
                i++;
                if (input[i] == "1")
                {
                    count++;
                   i++;
              continue;
                   
                }
              
            }
            
        }
        else{
        i++;
        }
        
    }
    cout << count;
    return 0;
}
