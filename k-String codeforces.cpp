#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k,i,j;
    cin>>k;
    string s;
    string neww;
    cin>>s;
    int n=s.length();
    int count[100];

    for(int i=0;i<=26;i++){
        count[i] =0;
    }

    for(i=0;i<n;i++)
    {
        count[s[i]-'a']++;
    }
    for(int i=0;i<=26;i++){
        if(count[i]%k!=0){
            cout << -1;
            exit(0);
        }
    }
        string str;
        for (int  i = 0; i < 26; i++)
        {
            if(count[i]>0){
                str.append(count[i] / k, 'a' + i);
            }
        }
        for(int i=0;i<k;i++){
            cout << str;
        }

    return 0;
}
