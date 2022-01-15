#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   vector<int> digits,ans;
   digits.push_back(9);
   digits.push_back(9);
   digits.push_back(9);
        string number;
        for(int i=0;i<digits.size();i++)
        {
           ans.push_back(digits[i]+1);
        }
        for(int i=0;i<digits.size();i++)
        {
           cout<<ans[i]<<endl;
        }
        //cout<<number<<endl;
       // int a=stoi(number);
        //cout<<a<<endl;

    return 0;
}

