#include<bits/stdc++.h>
using namespace std; 
long long int findparent(long long int node,vector<long long int> &parent)
{
    if(parent[node]==-1) return node;

    return parent[node]=findparent(parent[node],parent);
}

long long int  union1(long long int ulp1,long long int ulp2, vector<long long int> &rank,
vector<long long int> &parent)
{
    if(rank[ulp1]<rank[ulp2])
    {
        parent[ulp1]=ulp2;
        rank[ulp2]+=rank[ulp1];
        return rank[ulp2];
    }
    else if(rank[ulp2]<rank[ulp1])
    {
        parent[ulp2]=ulp1;
          rank[ulp1]+=rank[ulp2];
    }
    else
    {
        parent[ulp2]=ulp1;
        rank[ulp1]+=rank[ulp2];
    }
    return rank[ulp1];
}

int main()
{
    long long int n,m;
    cin>>n>>m;
     vector<long long int> rank(n+1,1);
         vector<long long int> parent(n+1);
        for(long long int i=1;i<=n;i++)
            {
                parent[i]=-1;
               // pq.push(1);
            }
       long long int ans=n,larg=1;
    for(long long int i=0;i<m;i++)
    {
        long long int a,b,c;
        cin>>a>>b;
         long long int ulp1=findparent(a,parent);
       long long int ulp2=findparent(b,parent);
       if(ulp1!=ulp2)
        {
           // union1(ulp1,ulp2,rank,parent);
            ans--;
            larg=max(larg,union1(ulp1,ulp2,rank,parent));
            cout<<ans<<" "<<larg<<endl;
        }
        else
        cout<<ans<<" "<<larg<<endl;
    }
    return 0;
}