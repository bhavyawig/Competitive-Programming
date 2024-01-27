#include<bits/stdc++.h>
using namespace std;

long long int findNthEvenDigitNumber(long long int n)
{
	if (n == 1)
		return 0;

	vector< long long int> v;
	n = n - 1;
	while (n > 0)
	{
		v.push_back(n % 5);
		n = n / 5;
	}
	long long int result = 0;
	for (long long int i = v.size() - 1; i >= 0; i--)
	{
		result = result * 10;
		result = result + v[i];
	}
	return 2*result;
}
int main()
{
    long long int n;
    cin>>n;
	cout << findNthEvenDigitNumber(n) 
		<< endl;
	return 0;
}
