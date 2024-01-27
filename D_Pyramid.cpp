#include <iostream>
#include <vector>
#include <algorithm>

int maxPyramidSequenceSize( std::vector<int>& A) {
    int left = 0;
    int right = A.size() - 1;

    while (left < right) {
        if (A[left] > A[right]) {
            A[left] -= 1;
        } else if (A[right] > A[left]) {
            A[right] -= 1;
        } else {
            if (A[left + 1] < A[right - 1]) {
                A[left] -= 1;
            } else {
                A[right] -= 1;
            }
        }

        left++;
        right--;
    }

    return A.size();
}

int main() {
    int N;
    std::cout << "Enter the length of the sequence N: ";
    std::cin >> N;

    std::vector<int> A(N);
    std::cout << "Enter the elements of the sequence A: ";
    for (int i = 0; i < N; ++i) {
        int e;
        std::cin >> e;
        A[i]=e;
    }

    int result = maxPyramidSequenceSize(A);
     for (int i = 0; i < N; ++i) 
     std::cout<<A[i]<<" ";
    //std::cout << "Maximum size of the Pyramid Sequence: " << result << std::endl;

    return 0;
}
