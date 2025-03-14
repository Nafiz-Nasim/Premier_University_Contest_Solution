#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int case_num = 1; case_num <= t; case_num++)
    {
        
        string soldiers;
        string dragon;
        
        int count=0;
        getline(cin, soldiers);
        getline(cin, dragon);
        for (int i = 0; i < soldiers.size(); i++)
        {
            bool fined = true;

            for (int j = 0; j < dragon.size(); j++)
            {

                if (soldiers[i + j] != dragon[j])
                {
                    fined = false;
                    break;
                }
                
            }
            if(fined) count++;
        }
        cout<<"Case"<<" "<<case_num<<":" <<" "<<count<<endl;
    }
}