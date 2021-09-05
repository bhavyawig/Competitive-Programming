#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s;
	 cin>>s;
	 int count=0;
	 int len=s.length();
	while(len>1){
		int sum=0;
		for(int i=0;i<len;i++){
			sum=sum+s[i]-'0';
		}
		 s=to_string(sum);
         len=s.length();
         ++count;
	 }
	 cout<<count;
    return 0;
}
