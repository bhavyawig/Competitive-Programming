#include<iostream>
using namespace std;
int main()
{
      int n,i,j,count=0;
      cin>>n;
      char a[n][5];
      for(i=0;i<n;i++)
      {
            for(j=0;j<5;j++)
            {
                  cin>>a[i][j];
            }
      }
      for(i=0;i<n;i++)
      {
            for(j=0;j<4;j++)
            {
                  if(a[i][j]==79 && a[i][j+1]==79)
                  {
                        cout<<"YES"<<endl;
                        a[i][j]= '+';a[i][j+1]= '+';
                        for(i=0;i<n;i++)
                        {
                            for(j=0;j<5;j++)
                            {
                                cout<<a[i][j];
                            }
                            cout<<endl;
                        }
                  }
                  else
                  {
                        count++;
                  }

            }
      }
      if(count ==4*n)
      {
          cout<<"NO";
      }


      return 0;

}
