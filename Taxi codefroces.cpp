
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,count=0,c1=0,c2=0,c3=0,l=0;
    cin>>n;
    vector<lli> a;
    for(lli i=0;i<n;i++)
    {
        lli x;
        cin>>x;
        a.push_back(x);
        if(x==1)
        {
            c1++;
        }
        else if(x==2)
        {
            c2++;
        }
        else if(x==3)
        {
            c3++;
        }
        else
        {
            count++;
        }
    }
   // cout<<count<<endl;

    // 1 and 3
    lli ott=min(c1,c3);
    c1=c1-ott;
    c3=c3-ott;
    count=count+ott;
    // cout<<count<<endl;


    // 1 and 2
    lli c1cpy=c1/2;
    lli ot=min(c1cpy,c2);
    count=count+ot;
    if(ot==c1cpy ){
    c1=c1-(2*c1cpy);
    }
    else{
        c1=c1-(2*c2);
    }
    c2=c2-ot;
    // cout<<count<<endl;


    // only 1
    if(c1%4==0)
    {
        count=count+(c1/4);
        c1=0;
    }
    else{
        count=count+(c1/4);
        c1=c1-(c1/4);
    }
     //cout<<count<<endl;
    // only 2
    if(c2%2==0)
    {
        count=count+(c2/2);
        c2=0;
    }
    else{
        count=count+(c2/2);
        c2=c2-(c2/2);
    }
   //  cout<<count<<endl;


    if(c3>=1)
      {
          count=count+c3;
          c3=0;
           //cout<<count<<endl;
      }
      if(c1>=1 || c2>=1)
    {
    count++;
    // cout<<count<<endl;
    }

    cout<<count<<endl;

    return 0;
}
