#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
 lli arr[10000000]={0};

vector<lli> input(vector<lli> inputvector,lli endlimit)
{
    for(lli i=0;i<endlimit;i++)
    {
        lli samplenumber;
        cin>>samplenumber;
        inputvector.push_back(samplenumber);
    }
    return inputvector;
}

/*void  sieve()
{
    prime[0]=1;prime[1]=1;
    for(lli i=2;i<1000000;i++)
    {
        if(prime[i]==0)
        {
            for(lli j=i*i;j<1000000;j+=i)
            {
                prime[j]=1;
            }
        }
    }


}
*/
int main()
{
   lli n;
   cin>>n;
   arr[0]=arr[1]=1;
    for(lli i=2; i<10000000; i++)
    {
        if(arr[i]==0)
        {
            for(lli j=i*i; j<10000000; j+=i)
            {
                arr[j]=1;
            }
        }
    }
   for(lli i=0;i<n;i++)
   {
       lli x;
       cin>>x;
       if(x==4 || x==9 || x==25)
       {
           cout<<"YES"<<endl;
       }
       else if(ceil(sqrt(x))==floor(sqrt(x)) && x%2!=0 && x!=1 && x!=0 && arr[int(sqrt(x))]==0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }


    return 0;
}

