#include<iostream>
#include<cstring>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<climits>
#define lli long long int
#define GO_FAST ios_base::sync_with_stdio(0);ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// basic debugging macros
lli _i,j_;
lli inf = 9e18;
#define line_printer(l) cout<<"\n"; for(_i=0;i<l;i_++){cout<<"-";}cout<<endl;
#define array_printer(a,l) cout<<#a<<": ";for(_i=0;i<l;i++){cout<<a[i_]<<" ";}cout<<"\n";
#define array_2d_printer(a,r,c) cout<<"\n"<<#a<<":\n";for(_i=0;i<r;i++){for(j=0;j<c;j++){cout<<a[i][j_]<<" ";}cout<<"\n";}
using namespace std;



int main()
{
    //GO_FAST
    string s;
    cin>>s;
    int i=0;
    int count=0;
    int j=s.length()-1;

    while(i <= j)
    {
      //  cout<<"at  = "<<i<<"  "<<j<<" ";
        if(s[i] != s[j])
        {
           // cout<<" not equal ";
            int j_found = -1;
            int i_found = -1;

            for(int k=i+1; k<=(j-1); k++)
            {
                if(s[k] == s[j])
                {
                    j_found = k;
                    break;
                }
            }

            for(int k=j-1; k>=(i+1); k--)
            {
                if(s[k] == s[i])
                {
                    i_found = k;
                    break;
                }
            }

           // cout<<" i_found = "<<i_found<<" j_found = "<<j_found<<"\n";

            if(i_found == -1 && j_found == -1)
            {
                if(j - i == 1){
                    s[i] = '-';
                    count+=1;}
                else
                {
                    s[i] = '-';
                    s[j] = '-';
                    count+=2;
                }
            }
            else
            {
                if(i_found != -1 && j_found == -1)
                {
                    for(int k=j; k>i_found; k--){
                        s[k] = '-';
                        count++;}
                    j = i_found;
                }
                else if(j_found != -1 && i_found == -1)
                {

                    for(int k=i; k<j_found; k++){
                            count++;
                        s[k] = '-';}
                    i = j_found;
                }
                else
                {
                    lli d1 = abs(i-j_found);
                    lli d2 = abs(j-i_found);

                    if(d1<=d2)
                    {

                        for(int k=i; k<j_found; k++){
                            s[k] = '-';
                            count++;}
                        i = j_found;
                    }
                    else
                    {
                        for(int k=j; k>i_found; k--){
                            s[k] = '-';
                            count++;}
                        j = i_found;
                    }
                }
            }
        }
        else
            //cout<<"Equal\n";

        i++;
        j--;
    }
   // cout<<count<<endl;
    if(count%2==0)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
   // cout<<s<<"\n";
    return 0;
}
