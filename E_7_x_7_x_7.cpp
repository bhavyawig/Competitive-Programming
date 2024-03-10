#include <iostream>
#include <cmath>
using namespace std;

bool check_volumes(int a1, int b1, int c1, int a2, int b2, int c2, int a3, int b3, int c3) {
    int total_volume = 343 * 3;
    
    // Calculate intersection volume
    int intersection_volume = max(0, min(a1 + 7, a2 + 7, a3 + 7) - max(a1, a2, a3)) *
                              max(0, min(b1 + 7, b2 + 7, b3 + 7) - max(b1, b2, b3)) *
                              max(0, min(c1 + 7, c2 + 7, c3 + 7) - max(c1, c2, c3));
    
    // Calculate volumes
    int V1 = total_volume - intersection_volume;
    int V2 = 3 * intersection_volume;
    int V3 = intersection_volume;
    
    // Check if volumes satisfy the conditions
    return V1 == 343 && V2 == 686 && V3 == 343;
}

int main() {
    for (int a1 = -100; a1 <= 100; ++a1) {
        for (int b1 = -100; b1 <= 100; ++b1) {
            for (int c1 = -100; c1 <= 100; ++c1) {
                // Calculate positions of the second and third cubes
                int a2 = a1;
                int b2 = b1 + 7;
                int c2 = c1 + 7;
                
                int a3 = a1 + 7;
                int b3 = b1;
                int c3 = c1;
                
                // Check volumes
                if (check_volumes(a1, b1, c1, a2, b2, c2, a3, b3, c3)) {
                    cout << "Found solution:" << endl;
                    cout << "C1: (" << a1 << ", " << b1 << ", " << c1 << ")" << endl;
                    cout << "C2: (" << a2 << ", " << b2 << ", " << c2 << ")" << endl;
                    cout << "C3: (" << a3 << ", " << b3 << ", " << c3 << ")" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No solution found." << endl;
    return 0;
}
