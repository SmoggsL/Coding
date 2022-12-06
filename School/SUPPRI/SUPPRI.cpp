#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e8+10;
int n;
int a[5] = {1,3,7,9};

bool primecheck(ll x)
{
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (int i = 5; i <= sqrt(x); i+= 6)
    {
        if (x% i == 0 || x % (i+2) == 0) return false;
    }
    return true;
}

bool lencheck(ll x)
{
    int len = 0;
    while(x>0)
    {
        len++;
        x=x/10;
    }
    if (len == n) return true;
    else return false;
}

int main() {
    freopen("SUPPRI.INP","r",stdin);
    freopen("SUPPRI.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    queue<ll> prime;
    prime.push(2);
    prime.push(3);
    prime.push(5);
    prime.push(7);
    while(!lencheck(prime.front()))
    {
        ll bruh = prime.front()*10;
        for (int i = 0; i < 5; i++)
        {

            if (primecheck(bruh + a[i])) prime.push(bruh+a[i]);
        }
        prime.pop();
    }
    ll k = prime.size();
    while (k--)
    {
        cout << prime.front() << endl;
        prime.pop();
    }
    return 0;
}