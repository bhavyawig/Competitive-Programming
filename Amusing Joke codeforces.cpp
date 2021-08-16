#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s1,s2,s3;
    cin>>s1;cin>>s2;cin>>s3;
    int len=s1.length();
    int len2=s2.length();
     int len3=s3.length();
    int count1[100],count2[100],count3[100],sum[100];

    for(int i=0;i<=26;i++){
        count1[i] =0;count2[i]=0;count3[i]=0;
    }
    for(int i=0;i<len;i++)
    {
        count1[s1[i]-'A']++;
    }
    for(int i=0;i<len2;i++)
    {
        count2[s2[i]-'A']++;
    }
   for(int i=0;i<=26;i++)
   {
       sum[i]=count1[i]+count2[i];
   }
     for(int i=0;i<len3;i++)
    {
        count3[s3[i]-'A']++;
    }
   for(int i=0;i<=26;i++)
   {
       if(count3[i]!=sum[i])
       {
           cout<<"NO";
           exit(0);
       }
   }
   cout<<"YES";
    return 0;

}
