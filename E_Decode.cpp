#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
int mod=1e9+7;
void findAllEqualZeroOneSubstrings(const string& s) {
    unordered_map<int, vector<int>> balanceMap; 
    int ans=0;
    int balance = 0; 
    balanceMap[0].push_back(-1); 
    int cnt=0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '1') {
            ++balance; 
        } else {
            --balance; 
        }

        if (balanceMap.find(balance) != balanceMap.end()) {
            for (int startIndex : balanceMap[balance]) {
               // cnt++;
               int left=startIndex+2;
                  int right=s.length()-i;
      ans=((ans%mod)+(left*right)%mod)%mod;
      if(ans<0)
      ans+=mod;
            }
        }

        balanceMap[balance].push_back(i);
    }

   
 cout<<ans<<endl;
  //  cout<<cnt<<endl;
    
}

int main() {
       ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
    string s;
    cin >> s;
   // long long len=s.length();
   // cout<<len<<endl;
    findAllEqualZeroOneSubstrings(s);
    }

    return 0;
}