#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        vector<pair<lli,lli>> ans;
          string f="";
                vector<lli> vec;
                for(lli i=0;i<=5;i++)
                {
                    f+=to_string(n);
                    //cout<<f<<endl;
                }
                for(int i=0;i<=5;i++)
                {
                    string temp=f.substr(0,i+1);
                    vec.push_back(stoll(temp));
                   // cout<<temp<<endl;
                }
            //   for(lli j=0;j<vec.size();j++)
            // {
            //    cout<<vec[j]<<endl;
            // }   
        for(lli a=1;a<=10000;a++)
        {   
            for(lli j=0;j<vec.size();j++)
            {
                lli b=(n*a)-vec[j];
                string uf=to_string(vec[j]);
                string fuc=to_string(n);
                lli baapre=fuc.length()*a;
                if(b>=1 && b<=10000 && baapre-b==uf.length())
                {
                    ans.push_back({a,b});
                }
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
        
    }
    return 0;
}


