#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e5;
ll a[maxn];

bool check(ll n)
{
    ll sum = 0;
    while(n>0)
    {
        sum += n%10;
        n /= 10;
    }
    if (sum == 10) return true;
    return false;
}

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    a[1] = 19;
    for (int i = 2; i <= n; i++)
    {
        if(check(a[i-1] + 9)) a[i] = a[i-1] + 9;
        else
        {
            ll temp = a[i-1] + 9;
            while(!check(temp))
            {
                temp += 9;
            }
            a[i] = temp;
        }
    }
    cout << a[n];
    return 0;
}