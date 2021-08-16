#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int k,j,len,counts=0,countl=0,suc=0,w,notposs=0;
        cin>>k;
        string str;
        for(j=0;j<k;j++)
        {
            cin>>str;
            len=str.length();
            for(w=0;w<len;w++){
            if(str[w]<=109 && str[w]>=97)
            {
                counts++;
            }
            else if(str[w]<=90 && str[w]>=78){
                countl++;
            }
            }
            if(counts==len || countl==len){
                suc++;
            }
            counts=0;countl=0;
        }


         if(suc==k && k!=0){
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
