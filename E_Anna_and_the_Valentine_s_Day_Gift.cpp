#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>


using namespace std;

bool isOddDigitCount(int num) {
    return to_string(num).size() % 2 != 0;
}

string determineWinner(int n, vector<int>& a) {
    bool annaTurn = true; // Flag to keep track of whose turn it is
    int finalNumber = 0; // The final number left in the list
    for (int num : a) {
        if (annaTurn) {
            // Anna's turn: Reverse the digits of the number
            string numStr = to_string(num);
            reverse(numStr.begin(), numStr.end());
            finalNumber = stoi(numStr);
        } else {
            // Sasha's turn: Concatenate two numbers to form a new number
            finalNumber = finalNumber * 1000000 + num; // Concatenate with leading zeros
        }
        annaTurn = !annaTurn; // Switch turns
    }

    // Determine the winner based on the final number's digit count
    if (isOddDigitCount(finalNumber)) {
        return "Anna";
    } else {
        return "Sasha";
    }
}

int main() {
    int test;
    cin>>test;
    for(int e=0;e<test;e++){
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << determineWinner(n, a) << endl;
}
    return 0;
}
