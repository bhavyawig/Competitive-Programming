#include <iostream>
#include <cmath>
using namespace std;

bool is_palindrome(unsigned long long num) {
    unsigned long long reversed_num = 0;
    unsigned long long temp = num;
    while (temp > 0) {
        reversed_num = reversed_num * 10 + temp % 10;
        temp /= 10;
    }
    return num == reversed_num;
}

unsigned long long max_palindromic_cube(unsigned long long N) {
   unsigned long long int poss=0;
    for (unsigned long long x = 1; x*x*x<=N; x++) {
        unsigned long long candidate = x * x * x;
        if (candidate <= N && is_palindrome(candidate)) {
          {
            poss=candidate;
          }
        }
    }
    return poss;
}

int main() {
    unsigned long long N;
    cin >> N;
    cout << max_palindromic_cube(N) << endl;
    return 0;
}
