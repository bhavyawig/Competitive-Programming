#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    int ans = 1;
    int i=0,j=0;
    while(i<l && j<l){
        if(s[j]=='1'){
            j++;
        }
        if(s[j]=='0'){
            ans = max(j-i,ans);
            i=j+1;
            j++;
        }
    }
    cout << max(j-i,ans);
}

