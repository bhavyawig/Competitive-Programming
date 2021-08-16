#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    unsigned long long int n;
    int k;
    cin>>n>>k;
    int i;
    for(i=0;i<k;i++)
    {
        if(n%200==0)
        {
            n=n/200;
        }
        else
        {
            string str=to_string(n);
            string str1="200";
            string str2;
            str2 = str +  str1;
            n=stoull(str2);


        }
    }
    cout<<n;

    return 0;
}
