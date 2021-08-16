
#include<bits/stdc++.h>
using namespace std;
int main()
{

    char x;
    set<char, greater<char>>s1;
    while(cin>>x)
    {
        s1.insert(x);
    }
    int q=s1.size();
    if(q>3){
    cout<<q-3;
    }
    else{
        cout<<"0";
    }
    return 0;
}
