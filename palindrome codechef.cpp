#include<bits/stdc++.h>
using namespace std;
int findSmallestNumber(int N, int K) {
        string S;
    int sum = 0;

    for (int i = 1; i <= N; i++) {
        if (i ==1) {
            S += '1'; // Choose any digit from 1 to 9
        }
        else if(i<=K)
            S+='0';
         else {
            // Choose a digit different from the digit at position i-K
            int prevDigit = S[i - K - 1] - '0';
            int currDigit = (prevDigit + 1) % 10;
            S += std::to_string(currDigit);
        }
        sum += S.back() - '0'; // Add the current digit to the sum
    }
  cout<<S<<endl;
    return sum;
}

int main() {
    int t;
    cin>>t;
    for(int y=0;y<t;y++){
    int N, K;
    cin >> N;
    cin >> K;

    int sum = findSmallestNumber(N, K);
    cout << "Sum of digits of the smallest number: " << sum << endl;
    }
    return 0;
}
