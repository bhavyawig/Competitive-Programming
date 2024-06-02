#include <iostream>
#include <string>

bool checkSubstringOccurrences(const std::string& str, int w, int b) {
    int n = str.length();
    int wCount = 0, bCount = 0;
    int j=0;
    for (int i = 0; i < n; ++i) {
        if (str[i] == 'w')
            ++wCount;
        else if (str[i] == 'b')
            ++bCount;

        while (wCount > w || bCount > b) {
            if (j<str.length() && str[j] == 'w')
                --wCount;
            else if (j<str.length() && str[j] == 'b')
                --bCount;
            ++j;
        }
            if (wCount == w && bCount == b)
                return true;
    }

    return false;
}

int main() {
    std::string str = "wbwbwwbwbwbw";
    int repetitions = 60;

    int w, b;
    std::cin >> w;
    std::cin >> b;

    std::string concatenatedStr;
    for (int i = 0; i < repetitions; ++i) {
        concatenatedStr += str;
    }

    bool containsSubstring = checkSubstringOccurrences(concatenatedStr, w, b);

    if (containsSubstring) {
       std::cout<<"Yes";
    } else {
        std::cout << "No";
    }

    return 0;
}
