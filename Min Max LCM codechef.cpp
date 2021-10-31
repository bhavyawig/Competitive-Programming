#include <iostream>
using namespace std;

long long gcd(long long int a, long long int b)
{
if (b == 0)
	return a;
return gcd(b, a % b);
}

long long lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}


int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
	int a,b;
	cin>>a>>b;
	cout<<lcm(a,2*a)<<" "<<lcm(a*b-1,a*b)<<endl;
    }
	return 0;
}


