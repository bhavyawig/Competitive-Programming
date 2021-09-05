#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,a4,cnt1=0,cnt2=0,cnt3=0,cnt4=0;
    cin>>a1;  cin>>a2;  cin>>a3;   cin>>a4;
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]=='1')
        {
            cnt1++;
        }
         if(s[i]=='2')
        {
            cnt2++;
        }
         if(s[i]=='3')
        {
            cnt3++;
        }
        if(s[i]=='4')
        {
            cnt4++;
        }
    }
        int sum=0;
        sum=(cnt1*a1)+(cnt2*a2)+(cnt3*a3)+(cnt4*a4);
        cout<<sum;
    return 0;
}
