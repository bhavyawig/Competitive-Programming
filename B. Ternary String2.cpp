#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli range(lli l,lli r,vector<vector<lli>> &ps,lli c)
{
    if(l == 0)
        return ps[c-1][r];
    else
        return ps[c-1][r] - ps[c-1][l-1];
}

bool is_possible(lli x,vector<vector<lli>> &ps,lli n)
{
    for(lli l=0; l<n; l++)
    {
        lli r = l + x - 1;
        if(r >= n)
            break;
        else
        {
            if(range(l,r,ps,1) > 0 && range(l,r,ps,2) > 0 && range(l,r,ps,3) > 0)
                return 1;
        }
    }
    return 0;
}




int main()
{
    lli test;
    cin>>test;

    for(lli e=0; e<test; e++)
    {
        string s;
        cin>>s;
        vector<vector<lli>> ps(3,vector<lli>(s.length()));

        lli count_1=0;
        lli count_2=0;
        lli count_3=0;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '1')
                count_1++;
            if(s[i] == '2')
                count_2++;
            if(s[i] == '3')
                count_3++;
            ps[0][i] = count_1;
            ps[1][i] = count_2;
            ps[2][i] = count_3;
        }
        lli n = s.length();
        lli low = 3;
        lli high = n;
        lli ans=-1;
        while(low<=high)
        {
            lli mid = (low+high)/2;
            //cout<<"trying "<<mid<<" \n";
            if(is_possible(mid,ps,n))
            {
                //cout<<"possible\n";
                ans = mid;
                high = mid-1;
            }
            else
            {
                //cout<<"Not possible\n";
                low = mid+1;
            }
        }

        if(ans == -1)
        cout<<0<<"\n";
    else
        cout<<ans<<"\n";
    }



    return 0;
}
