
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
    cin>>k;
string a;
    for(int i=0;i<16;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<16;i++)
    {
        if(a[i]=='1')
        {
            count1++;
        }
        if(a[i]=='2')
        {
            count2++;
        }
        if(a[i]=='3')
        {
            count3++;
        }
        if(a[i]=='4')
        {
            count4++;
        }
        if(a[i]=='5')
        {
            count5++;
        }
        if(a[i]=='6')
        {
            count6++;
        }
        if(a[i]=='7')
        {
            count7++;
        }
        if(a[i]=='8')
        {
            count8++;
        }
        if(a[i]=='9')
        {
            count9++;
        }
    }
    if(count1<=2*k && count2<=2*k && count3<=2*k && count4<=2*k && count5<=2*k && count6<=2*k && count7<=2*k && count8<=2*k && count9<=2*k)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
