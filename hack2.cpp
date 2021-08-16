#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class bhavya{
    public:
    void disp()
    {
    int n,i,j;
    cin>>n;
    int a[100],b[100];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        b[i]=a[j];
    }
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
    }
};

int main() {
       bhavya m;
       m.disp();
    return 0;
}
