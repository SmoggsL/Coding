// all the variation of the exercise are in vnoj

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll n,t,l,r;

bool primecheck(ll x)
{
    if (x == 2 || x == 3) return true;
    if (x < 5) return false;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (int i = 5; i <= sqrt(x); i+= 6)
    {
        if (x% i == 0 || x % (i+2) == 0) return false;
    }
    return true;
}

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    bool PAIN = false;
    ll n = sqrt(t);
    while(PAIN == false)
    {
        if (primecheck(n))
        {
            if (n*n >= t) 
            {
                cout << n*n << endl;
                break;
            }
        }
        n++;
    }
    
    return 0;
}