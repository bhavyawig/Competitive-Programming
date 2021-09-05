#include<bits/stdc++.h>
using namespace std;
int main()
{
    float total;
    int with;
    cin>>with;
    cin>>total;
    if(with%5==0)
    {
        if(with<=total-0.5)
        {
float num=total-with-0.5;
    printf("%0.2f", num);
        }
        else
        {
            cout<<total<<endl;
        }
    }
    else
    {
        cout<<total<<endl;
    }


    return 0;
}

