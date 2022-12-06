#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e7+5;
ll a,b;
bool prime[maxn];

void PriSieve()
{
    memset(prime,1,sizeof(prime));
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(maxn); i++)
    {
        if(prime[i] == 1)
        {
            for (int j = i*i; j <= maxn; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

bool suprime(ll n)
{
    while (n > 0)
    {
        if (prime[n] == 0)
        {
            return 0;
        }
        n = n/10;
    }
    return 1;
}

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> a >> b;
    PriSieve();
    for (int i = a; i<= b;i++)
    {
        if(suprime(i) != 0) cout << i << " ";
        // cout << prime[i] << " ";
    }
    return 0;
}