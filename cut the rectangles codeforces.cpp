
    #include <iostream>
    using namespace std;


    int main(){
        int n,flag=0;
        cin>>n;
        int a[n][2];
        for(int i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1];
        }
        int m=max(a[0][0],a[0][1]);
        //cout<<"m="<<m<<endl;
        for(int i=1;i<n;i++)
        {
            if(max(a[i][0],a[i][1])>m)
            {
               if(min(a[i][0],a[i][1])>m)
               {
                   flag=1;
                   cout<<"NO"<<endl;
                  exit(0);
               }
               else
               {
                   m=min(a[i][0],a[i][1]);
               }
            }
            else
                m=max(a[i][0],a[i][1]);
        }
        if(flag==0)
            cout<<"YES"<<endl;
    }
