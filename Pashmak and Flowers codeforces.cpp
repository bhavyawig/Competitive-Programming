
#include<bits/stdc++.h>
using namespace std;
int main()
{
     unsigned long long int n;
    unsigned long long int count1=0,count2=0,count3=0;
    cin>>n;
    unsigned long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q=sizeof(a)/sizeof(a[0]);
    sort(a,a+q);
    int diff=a[n-1]-a[0];
    for(int i=0;i<n;i++)
    {
        if(a[0]!=a[n-1]){
            count3++;
        if(a[i]==a[0])
        {
            count1++;
        }
        if(a[i]==a[n-1])
        {
            count2++;
        }}

    }
    if(count3!=0){
    cout<<diff<<" "<<count1*count2;}
    else{
            unsigned long long int d=(n*(n-1))/2;
        cout<<diff<<" "<<d;}




    return 0;
}
