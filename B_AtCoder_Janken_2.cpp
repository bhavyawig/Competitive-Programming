#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli n,sum=0;
    cin>>n;
    vector<string> vec;
    for(int i=0;i<n;i++)
    {
        string uf; int no;
        cin>>uf>>no;
        sum+=no;
        vec.push_back(uf);
    }
    sort(vec.begin(),vec.end());
    lli index=sum%n;
    cout<<vec[index]<<endl;
    return 0;
}


