// C++ program to print all prime factors
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	if (2 <= n && n <= pow(10,9))
	{
		cout << n << ":";
		for (int i = 2; i*i <= n; i++)
		{
			while (n % i == 0)
			{
				cout << " " << i;
				n = n / i;
			}
		}
	}
	if(n>1) cout<<" "<<n;
	 cout << endl;
 return 0;

}