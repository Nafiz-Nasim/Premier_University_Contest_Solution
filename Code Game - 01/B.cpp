#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int test, team1gool = 0, team2gool = 0;
    string team1;
    string team2;
    cin >> test;
    cin.ignore();
    for (int i = 1; i <= test; i++)
    {

        string input;
        getline(cin, input);
            
        if (i == 1)
        {

            team1 = input;
        }
        if (input != team1)
        {
           team2=input;
            team2gool++;
        }
        else if (input==team1)
            {
                team1gool++;
            }
    }
    if (team1gool > team2gool)
        cout << team1;
    else
        cout << team2;
}
