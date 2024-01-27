#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin>>t;
    for(int e=0;e<t;e++)
    {
    int h, w, xa, ya, xb, yb;

    // Input the size of the board and initial coordinates
    std::cin >> h >> w;

    std::cin >> xa >> ya;

    std::cin >> xb >> yb;

    // Determine the outcome of the game
    while (true) {
        // Alice's turn
        if (xa + 1 <= h && (ya == yb || ya - 1 == yb || ya + 1 == yb)) {
            xa += 1;
        } else {
            std::cout << "Bob wins the game!" << std::endl;
            break;
        }

        // Check if Alice wins
        if (xa == xb && ya == yb) {
            std::cout << "Alice wins the game!" << std::endl;
            break;
        }

        // Bob's turn
        if (xb - 1 >= 1 && (yb == ya || yb - 1 == ya || yb + 1 == ya)) {
            xb -= 1;
        } else {
            std::cout << "Alice wins the game!" << std::endl;
            break;
        }

        // Check if Bob wins
        if (xa == xb && ya == yb) {
            std::cout << "Bob wins the game!" << std::endl;
            break;
        }
    }
    }
    return 0;
    }
