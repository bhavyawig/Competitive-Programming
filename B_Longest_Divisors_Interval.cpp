#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MAXN 1000000000000000001
 
// stores smallest prime factor for every number
lli spf[MAXN];
 
void sieve()
{
    spf[1] = 1;
    for (lli i = 2; i < MAXN; i++)
 
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
 
    // separately marking spf for every even
    // number as 2
    for (lli i = 4; i < MAXN; i += 2)
        spf[i] = 2;
 
    for (lli i = 3; i * i < MAXN; i++) {
        // checking if i is prime
        if (spf[i] == i) {
            // marking SPF for all numbers divisible by i
            for (lli j = i * i; j < MAXN; j += i)
 
                // marking spf[j] if it is not
                // previously marked
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

void generateCombinations(const vector<lli>& factors, lli index, lli currentProduct, vector<lli>& combinations) {
    lli n1 = factors.size();
    if (index == n1) {
        combinations.push_back(currentProduct);
        return;
    }

    // Include the factor at the current index in the product
    generateCombinations(factors, index + 1, currentProduct * factors[index], combinations);

    // Exclude the factor at the current index from the product
    generateCombinations(factors, index + 1, currentProduct, combinations);
}
 vector<lli> primeFactors(lli x)
{
    vector<lli> ret;
    while (x != 1) {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}
vector<lli> printProductsOfCombinations(lli n) {
    vector<lli> factors = primeFactors(n);
     for (int i = 0; i < factors.size(); i++)
        cout << factors[i] << " ";
    cout << endl;
    vector<lli> combinations;
    generateCombinations(factors, 0, 1, combinations);
    return combinations;
}

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n;
        cin>>n;
            sieve();
        vector<lli> uf=printProductsOfCombinations(n);
        lli ans=1,cnt=0;
        for(lli i=1;i<uf.size();i++)
        {
            if(uf[i]-uf[i-1]==1)
            cnt++;
            else
            cnt=0;
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}