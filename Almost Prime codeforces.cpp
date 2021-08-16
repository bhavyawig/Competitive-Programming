#include<bits/stdc++.h>
using namespace std;
unsigned long long int arr[3001];
int main()
{
      int n;
    cin>>n;
    int ck=0;
    for(int i=2; i<=n; i++){
        if(arr[i]==0){
            for(int j=i; j<=n; j+=i)
                arr[j]++;
        }

      if(arr[i]==2)
        ck++;
    }
    cout<<ck<<endl;
    return 0;
}
