#include<iostream>
using namespace std;
int main()
{
    unsigned long long int T;
    cin>>T;
    unsigned long long int N[T],x[T],k[T];
    int i;
    for(i=0;i<T;i++)
    {
        cin>>N[i]>>x[i]>>k[i];
    }
    for(i=0;i<T;i++)
    {

        if((N[i]+1)%k[i]!=0 &&  )
        {
            cout<<"yes";
        }
        else if((N[i]+1)%k[i]==0 && x[i]%k[i]==0  && x[i]>=k[i])
        {
            cout<<"yes";
        }
        else if((N[i]+1)%k[i]==0 && k[i]%x[i]==0  && x[i]<k[i])
        {
            cout<<"yes";
        }
        else
        {
            cout<<"no"<<endl;
        }

    }
    return 0;
}
