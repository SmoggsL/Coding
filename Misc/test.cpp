#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n;

void f(int *p)
{
    *p = *p**p;
    (*p)++; 
}

int sum_array(ll *p,ll n)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
       sum += p[i];
    }
    return sum;
}

int main() {
    // freopen("main.INP","r",stdin);
    // freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    ll a[n+1];
    for (int i = 0; i < n; i++)
    {
       cin >> a[i];
    }
    cout << sum_array(a,n);
    // f(&n);
    // cout << S
    return 0;
}