#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    vector<int>v;
    cin>>n;
    if(n==1)
    {
        cout<<"1";
    }
    else if(n==2 || n==3 )
    {
        cout<<"NO SOLUTION";
    }
    else if(n==4)
    {
        cout<<"2 4 1 3";
    }
    else
    {
        for(int i=n;i>0;i=i-2)
        {
            v.push_back(i);
        }
        for(int i=n-1;i>0;i=i-2)
        {
            v.push_back(i);
        }
        vector<int>::iterator itr;
        for(itr=v.begin();itr!=v.end();itr++)
        {
            cout<<*itr<<" ";
        }
    }

    return 0;
}

