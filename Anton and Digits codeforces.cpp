#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num2,k3,num5,num6,f,e;
    cin>>num2;
    cin>>k3;
    cin>>num5;
    cin>>num6;
    if(num2<num5 && num2<num6)
	{
		f=num2;
	}
	else if(num5<num6)
	{
		f=num5;
	}
	else
	{
        f=num6;
	}
	num2=num2-f;
	if(num2>k3)
    {
        e=k3;
    }
    else
    {
        e=num2;
    }
     int final=(f*256)+(e*32);
     cout<<final<<endl;
    return 0;
}
