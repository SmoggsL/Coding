#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e8+10;
ll a,b;
bool Sieve[maxn];
void PrimeSieve()
{
    Sieve[0] = Sieve[1] = 0;
    for (int i = 2; i <= b; i++)
    {
        if(Sieve[i])
        {
            for (int k = 2; k*k <= b; k++)
            {
                Sieve[k*i] = false;
            }
        }
    }
}

bool check(ll n)
{
    ll sum = 0,temp;
    while(n>0)
    {
        sum = sum + n%10;
        n = n/10;
    }
    if (Sieve[sum]) return true;
    else return false;
}

int main() {
    freopen("TNT.INP","r",stdin);
    freopen("TNT.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> a >> b;
    PrimeSieve();
    ll counter = 0;
    for (int i = a; i <= b; i++)
    {
        if (check(i)) counter++;
    }
    cout << counter;
    return 0;
}