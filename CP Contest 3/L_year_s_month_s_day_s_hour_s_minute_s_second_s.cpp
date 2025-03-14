#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int ca = 1; ca <= t; ca++)
    {
        long long s;
        cin >> s;

        int years = s / 31104000;
        s %= 31104000;

        int months = s / 2592000;
        s %= 2592000;

        int days = s / 86400;
        s %= 86400;

        int hours = s / 3600;
        s %= 3600;

        int minutes = s / 60;
        s %= 60;

        int seconds = s;

        cout << "Case " << ca << ":";

        if (years > 0)
            cout << " " << years << (years > 1 ? " years" : " year");
        if (months > 0)
            cout << " " << months << (months > 1 ? " months" : " month");
        if (days > 0)
            cout << " " << days << (days > 1 ? " days" : " day");
        if (hours > 0)
            cout << " " << hours << (hours > 1 ? " hours" : " hour");
        if (minutes > 0)
            cout << " " << minutes << (minutes > 1 ? " minutes" : " minute");
        if (seconds > 0)
            cout << " " << seconds << (seconds > 1 ? " seconds" : " second");

        cout << endl;
    }

    return 0;
}
