#include <bits/stdc++.h>
using namespace std;
int count_same_digit(int L, int R)
{
	int tmp = 0, ans = 0;
	int n = log10(R) + 1;
	for (int i = 0; i < n; i++) {
		tmp = tmp * 10 + 1;
		for (int j = 1; j <= 9; j++) {

			if (1<= (tmp * j)
				&& (tmp * j) <= R) {
				ans++;
			}
		}
	}
	return ans;
}


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
	int L = 1, R ;
    cin>>R;
	cout << count_same_digit(L, R)
		<< endl;
    }
	return 0;
}
