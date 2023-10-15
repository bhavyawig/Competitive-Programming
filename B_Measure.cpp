#include <iostream>
#include <string>

std::string generateString(int N) {
    std::string result;
    for (int i = 0; i <= N; ++i) {
        char s_i = '-';
        for (int j = 1; j <= 9; ++j) {
            if (N % j == 0 && i % (N / j) == 0) {
                s_i = '0' + j;
                break;
            }
        }
        result += s_i;
    }
    return result;
}

int main() {
    int N ;
    std::cin>>N;
    std::string outputString = generateString(N);
    std::cout << outputString << std::endl;
    return 0;
}
