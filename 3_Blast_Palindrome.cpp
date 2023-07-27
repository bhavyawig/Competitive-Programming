#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int e=0;e<t;e++){
    int n;
   cin>>n;
    string s;
    cin >> s;
    if(s.length()%3==1) cout<<"YES"<<endl;
    else
    {
        int ok=0;
        for(char f='a';f<='z';f++)
        {
            int pehla=n+1,end=-1;
            for(int i=0;i<n;i++)
            {
                if(i%3==0 && s[i]==f)
                {
                    pehla=i;
                    break;
                }
            }
        for(int i=n-1;i>=0;i--)
        {
            int val=n-i-1;
            if(val%3==0 && s[i]==f)
            {
                end=i;
                break;
            }
        }
        if(pehla<end) { ok++; cout<<"YES"<<endl;}
        }
       if(ok==0) cout<<"NO"<<endl;
    }
    }

    return 0;
}
