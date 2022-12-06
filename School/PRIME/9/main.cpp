#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n;

bool primecheck(ll n)
{
    if (n == 2|| n == 3) return true;
    if (n < 5) return false;
    if (n%2 == 0 || n% 3 == 0) return false;
    for (int i = 5; i <= sqrt(n); i+= 6)
    {
        if (n% i == 0 || n % (i+2) == 0) return false;
    }
    return true;
}

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    while (n > 0)
    {
        if (!primecheck(n))
        {
            cout << "FALSE";
            return 0;
        }
        n = n/10;
    }
    cout << "TRUE";
    return 0;
}