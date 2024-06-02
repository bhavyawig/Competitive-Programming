#include <iostream>
#include<bits/stdc++.h>
typedef long long int lli;

using namespace std;

int main() {
    lli H;
    cin >> H;

    lli day = 0;      
    lli plant_height = 0; 

    while (true) {
        plant_height += pow(2,day);
        
        if (plant_height > H) {
            cout <<  day+1 << endl;
            break;
        }
        
        day++;
    }

    return 0;
}
