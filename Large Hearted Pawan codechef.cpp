#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
template <typename T>
void input(vector<T> &arr,lli n) {
  T temp;
  for(lli i=0;i<n;i++) cin>>temp, arr.push_back(temp);
}

int main()
{
   lli n,k;
    cin >> n >> k;

    vector<lli> vec;
    input(vec,n);

    set<int> s;
    int ans=0;
    for(auto x : vec){
        s.insert(x);
    }

    if(s.size()<k){
        cout << "ashubh\n";
    }
    else{
        sort(vec.begin(),vec.end());
        if(vec[k-1]==vec[k]){
            cout << "ashubh\n";
        }
        else{
            cout << "shubh\n";
            cout << vec[k-1] << endl;
        }
    }

    return 0;
}

