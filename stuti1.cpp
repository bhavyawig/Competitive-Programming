/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int ans=0;

bool ispal(string temp)
{
    string iit = temp;
    reverse(iit.begin(), iit.end());
    if(iit==temp) return true;
    return false;
}

void dp(vector<string> &vec, int i, string temp,int k)
{
    if(i>=vec.size()) {
        return;
    }
      if(ispal(temp)) {
       //  cout<<temp<<" ";
            int len1 = temp.length();
            ans = max(ans, len1);
        }
    if(i!=k){
   // cout<<temp<<endl;
    // take
    temp+=vec[i];
    dp(vec, i+1, temp,k);
    for(int j=0;j<vec[i].length();j++)
   {
   // cout<<vec[i]<<endl;
     temp.pop_back();
   }

    // not take
    dp(vec, i+1, temp,k);
    }
    else
    dp(vec,i+1,temp,k);
}

int main()
{
    lli n,len;
    cin >> n>>len;
    vector<string> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
      //  cout<<vec[i]<<" ";
    }


    string temp = "";
    for(int k=0;k<n;k++){
        temp=vec[k];
    dp(vec, 0, temp,k);
    }
    cout << ans << endl;
}
