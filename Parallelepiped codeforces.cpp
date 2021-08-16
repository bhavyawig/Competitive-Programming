#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    int a=sqrt((s1*s2)/s3);
    int b=sqrt((s3*s1)/s2);
    int c=sqrt((s3*s2)/s1);
    int sum=a+b+c;
    cout<<4*sum;
    return 0;
}
