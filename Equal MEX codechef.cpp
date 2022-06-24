#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       lli a[2*n];
       vector<lli> lrg,sml;
       lli z=0;
       lli zero=0;
       for(lli i=0;i<2*n;i++)
       {
           cin>>a[i];
           if(a[i]==0)
           {
               zero++;
           }
           lrg.push_back(a[i]);
           sml.push_back(a[i]);
       }
       if(zero==0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           // sort(lrg.begin(),lrg.end());
            //reverse(lrg.begin(),lrg.end());
            sort(sml.begin(),sml.end());
            lli s=0,k=0;
            for(lli i=0;i<n;i++)
            {
                a[i]=sml[k];
               k=k+2;
            }
            lli q=1;
            for(lli i=n;i<2*n;i++)
            {
                a[i]=sml[q];
                q=q+2;
            }
            lli d=0;
            lli store=-1,storee=-1;
            bool nn=true,ne=true;
            lli c[n],b[n];
            for(lli i=0;i<n;i++)
            {
                b[i]=a[i];
            }
            lli p=0;
            for(lli i=n;i<2*n;i++)
            {
                c[p]=a[i];
                p++;
            }
            sort(b,b+n);
            sort(c,c+n);
            lli bb=0,cc=0;
            for(lli i=0;i<n;i++)
            {
                nn=true;
                nn=binary_search(b,b+n,d);
                if(nn==false && cc==0)
                {
                    store=d;
                    cc++;
                }
                else
                {
                    d++;
                }
            }
            lli de=0;
            for(lli i=0;i<n;i++)
            {
                ne=true;
                ne=binary_search(c,c+n,de);
                if(ne==false && bb==0)
                {
                    storee=de;
                    bb++;
                }
                else
                {
                    de++;
                }
            }
            if(store==-1)
            {
                store=b[n-1]+1;
            }
            if(storee==-1)
            {
                storee=c[n-1]+1;
            }

            if(store==storee)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
       }
    }

    return 0;
}

