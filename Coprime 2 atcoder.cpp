#include <bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++)
	{
		if (prime[p] == true)
		{
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
}

// Driver Code
int main()
{
	int n,m;
	cin>>n; cin>>m;
	int a[n];
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
	SieveOfEratosthenes(n);
	return 0;
}

