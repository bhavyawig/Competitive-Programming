
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli row,col;
   cin>>row>>col;
   vector<string> vec;
   int ok=0;
   for(int i=0;i<row;i++)
   {
      string lo;
      cin>>lo;
      vec.push_back(lo);
   }
   string dhundo="snuke";
   for(int i=0;i<row;i++)
   {
       string temp=vec[i];
       int len=temp.length();
       size_t found=temp.find(dhundo);
        if (found != string::npos && ok==0)
        {
            for(int e=0;e<=4;e++)
            {
                cout<<i+1<<" "<<found+1<<endl;
                found++;
                ok++;
            }
        }
        reverse(temp.begin(),temp.end());
         size_t found1=temp.find(dhundo);
         if (found1!= string::npos && ok==0)
        {
            ok++;
            for(int e=0;e<=4;e++)
            {
                cout<<i+1<<" "<<len-found<<endl;
                found--;
            }
        }
        // reverse(temp.begin(),temp.end());
   }

   string kr;
   for(int i=0;i<col;i++)
   {
       kr="";
       for(int j=0;j<row;j++)
       {
           string uff=vec[j];
           kr+=uff[i];
       }
       //int land=kr.length();
       size_t stuti=kr.find(dhundo);
        if (stuti!=string::npos && ok==0)
        {
            ok++;
            for(int e=0;e<=4;e++)
            {
                cout<<stuti+1<<" "<<i+1<<endl;
                stuti++;
            }
        }
        reverse(kr.begin(),kr.end());
         size_t stuti1=kr.find(dhundo);
         if (stuti1!= string::npos && ok==0)
        {
            //cout<<stuti1<<endl;
            for(int e=0;e<=4;e++)
            {
                cout<<col-stuti1<<" "<<i+1<<endl;
                stuti1++;ok++;
            }
        }
         //reverse(kr.begin(),kr.end());
   }
string vansh,vansh1,vansh2,vansh3,vansh4;
   for(int i=0;i<row;i++)
   {
       if(i+4<row){
        vansh=vec[i];
        vansh1=vec[i+1];
        vansh2=vec[i+2];
        vansh3=vec[i+3];
        vansh4=vec[i+4];
       }
       for(int j=0;j<col;j++)
       {
           if(j+4<col && vansh[j]=='s' && vansh1[j+1]=='n' && vansh2[j+2]=='u' && vansh3[j+3]=='k' && vansh4[j+4]=='e'  && ok==0)
           {
               ok++;
               for(int r=0;r<=4;r++)
               {
                   cout<<i+1<<" "<<j+1<<endl;
                   i++;j++;
               }
           }
       }

       for(int j=0;j<col;j++)
       {
           if(j+4<col && vansh[j]=='e' && vansh1[j+1]=='k' && vansh2[j+2]=='u' && vansh3[j+3]=='n' && vansh4[j+4]=='s'  && ok==0)
           {
               ok++;
               for(int r=0;r<=4;r++)
               {
                   cout<<i+5<<" "<<j+5<<endl;
                   i--;j--;
               }
           }
       }
   }

    return 0;

}
