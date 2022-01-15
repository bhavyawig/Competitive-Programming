#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];

    lli q;
    cin>>q;

    int p[q];
    for(int i=0;i<q;i++)
        cin>>p[i];

    sort(a,a+n);
    int x,cnt=0;
    int ss[q][2];
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=p[k] && k<q)
        {
            cnt=cnt+a[i];
            x=a[i];

        }
        else if(a[i]>p[k] && k<q){

            i=-1;
            ss[k][0]=x;ss[k][1]=cnt;
            cnt=0;
            k++;
        }
    }
    for(int i=0;i<q;i++)
    {
        cout<<ss[i][0]<<" "<<ss[i][1]<<endl;
    }

    return 0;
}

