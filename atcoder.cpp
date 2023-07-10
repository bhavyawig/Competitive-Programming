#include <iostream>
#include <vector>
#include <string>

bool canAchieveGoal(const std::vector<std::string>& A, const std::vector<std::string>& B, const std::vector<std::string>& X) {
    int HA = A.size();
    int WA = A[0].size();
    int HB = B.size();
    int WB = B[0].size();
    int HX = X.size();
    int WX = X[0].size();

    for (int i = 0; i <= HA - HX; i++) {
        for (int j = 0; j <= WA - WX; j++) {
            bool match = true;
            for (int k = 0; k < HX; k++) {
                for (int l = 0; l < WX; l++) {
                    char c = A[i + k][j + l];
                    char d = B[i + k][j + l];
                    char e = X[k][l];
                    if ((c == '#' || d == '#') && e == '.') {
                        match = false;
                        break;
                    }
                }
                if (!match) {
                    break;
                }
            }
            if (match) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int HA, WA;
    std::cin >> HA >> WA;
    std::vector<std::string> A(HA);
    for (int i = 0; i < HA; i++) {
        std::cin >> A[i];
    }

    int HB, WB;
    std::cin >> HB >> WB;
    std::vector<std::string> B(HB);
    for (int i = 0; i < HB; i++) {
        std::cin >> B[i];
    }

    int HX, WX;
    std::cin >> HX >> WX;
    std::vector<std::string> X(HX);
    for (int i = 0; i < HX; i++) {
        std::cin >> X[i];
    }

    bool result = canAchieveGoal(A, B, X);
    if (result) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}

