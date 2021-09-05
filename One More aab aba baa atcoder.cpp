#include <bits/stdc++.h>
using namespace std;


string newString(string s, int k)
{

	string X = "";


	while (s.length() > 0) {

		char temp = s[0];
		for (long long i = 1; i < k and i < s.length(); i++) {
			if (s[i] < temp) {
				temp = s[i];
			}
		}

		X = X + temp;
		for (long long i = 0; i < k; i++) {
			if (s[i] == temp) {

				s.erase(s.begin() + i);
				break;
			}
		}
	}
	return X;
}

int main()
{

	string s;
	cin>>s;
	int k;
	cin>>k;

	cout << newString(s, k);
}

